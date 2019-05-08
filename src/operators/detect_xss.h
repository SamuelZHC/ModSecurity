/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 - 2020 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#ifndef SRC_OPERATORS_DETECT_XSS_H_
#define SRC_OPERATORS_DETECT_XSS_H_

#include <string>

#include "src/operators/operator.h"

namespace modsecurity {
namespace operators {

class DetectXSS : public Operator {
 public:
    /** @ingroup ModSecurity_Operator */
    DetectXSS()
        : Operator("DetectXSS") {
            m_match_message.assign("detected XSS using libinjection.");
        }

    bool evaluate(Transaction *transaction,
        const RuleWithActions *rule,
        const bpstd::string_view &input,
        RuleMessage *ruleMessage) override;
};

}  // namespace operators
}  // namespace modsecurity


#endif  // SRC_OPERATORS_DETECT_XSS_H_
