#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238128
// Address: 0x238128 - 0x238288
void sub_00238128_0x238128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238128_0x238128");
#endif

    switch (ctx->pc) {
        case 0x23818cu: goto label_23818c;
        case 0x238198u: goto label_238198;
        case 0x2381a4u: goto label_2381a4;
        case 0x2381ccu: goto label_2381cc;
        case 0x2381dcu: goto label_2381dc;
        case 0x2381f0u: goto label_2381f0;
        case 0x238214u: goto label_238214;
        case 0x238220u: goto label_238220;
        case 0x23823cu: goto label_23823c;
        case 0x23824cu: goto label_23824c;
        default: break;
    }

    ctx->pc = 0x238128u;

    // 0x238128: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23812c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23812cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x238130: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x238130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x238134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238138: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23813c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x23813cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238140: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x238140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x238144: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x238144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238148: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x23814c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23814cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238150: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x238150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x238154: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x238154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x238158: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x238158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23815c: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x23815cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x238160: 0x8c75014c  lw          $s5, 0x14C($v1)
    ctx->pc = 0x238160u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x238164: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x238164u;
    {
        const bool branch_taken_0x238164 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x238168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238164u;
        // 0x238168: 0x8c540084  lw          $s4, 0x84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238164) {
            ctx->pc = 0x2381DCu;
            goto label_2381dc;
        }
    }
    ctx->pc = 0x23816Cu;
    // 0x23816c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x238170: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x238170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x238174: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x238174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x238178: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x238178u;
    {
        const bool branch_taken_0x238178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x238178) {
            ctx->pc = 0x23817Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x238178u;
            // 0x23817c: 0x8e04038c  lw          $a0, 0x38C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2381A8u;
            goto label_2381a8;
        }
    }
    ctx->pc = 0x238180u;
    // 0x238180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x238180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238184: 0xc08bf70  jal         func_22FDC0
    ctx->pc = 0x238184u;
    SET_GPR_U32(ctx, 31, 0x23818Cu);
    ctx->pc = 0x238188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238184u;
    // 0x238188: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FDC0u, 0x238184u, 0x23818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23818Cu;
label_23818c:
    // 0x23818c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x238190: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x238190u;
    SET_GPR_U32(ctx, 31, 0x238198u);
    ctx->pc = 0x238194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238190u;
    // 0x238194: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x238190u, 0x238198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238198u;
label_238198:
    // 0x238198: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x238198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x23819c: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x23819Cu;
    SET_GPR_U32(ctx, 31, 0x2381A4u);
    ctx->pc = 0x2381A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23819Cu;
    // 0x2381a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x23819Cu, 0x2381A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381A4u;
label_2381a4:
    // 0x2381a4: 0x8e04038c  lw          $a0, 0x38C($s0)
    ctx->pc = 0x2381a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_2381a8:
    // 0x2381a8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2381A8u;
    {
        const bool branch_taken_0x2381a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381A8u;
        // 0x2381ac: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381a8) {
            ctx->pc = 0x2381DCu;
            goto label_2381dc;
        }
    }
    ctx->pc = 0x2381B0u;
    // 0x2381b0: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2381b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2381b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2381b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2381b8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2381B8u;
    {
        const bool branch_taken_0x2381b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2381BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381B8u;
        // 0x2381bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381b8) {
            ctx->pc = 0x2381D4u;
            goto label_2381d4;
        }
    }
    ctx->pc = 0x2381C0u;
    // 0x2381c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2381c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381c4: 0xc08f5b4  jal         func_23D6D0
    ctx->pc = 0x2381C4u;
    SET_GPR_U32(ctx, 31, 0x2381CCu);
    ctx->pc = 0x2381C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381C4u;
    // 0x2381c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x2381C4u, 0x2381CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381CCu;
label_2381cc:
    // 0x2381cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2381CCu;
    {
        const bool branch_taken_0x2381cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381CCu;
        // 0x2381d0: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381cc) {
            ctx->pc = 0x2381E0u;
            goto label_2381e0;
        }
    }
    ctx->pc = 0x2381D4u;
label_2381d4:
    // 0x2381d4: 0xc08f5b4  jal         func_23D6D0
    ctx->pc = 0x2381D4u;
    SET_GPR_U32(ctx, 31, 0x2381DCu);
    ctx->pc = 0x2381D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381D4u;
    // 0x2381d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x2381D4u, 0x2381DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381DCu;
label_2381dc:
    // 0x2381dc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x2381dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2381e0:
    // 0x2381e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2381e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2381e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2381e8: 0xc069d3e  jal         func_1A74F8
    ctx->pc = 0x2381E8u;
    SET_GPR_U32(ctx, 31, 0x2381F0u);
    ctx->pc = 0x2381ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2381E8u;
    // 0x2381ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A74F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A74F8u, 0x2381E8u, 0x2381F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2381F0u;
label_2381f0:
    // 0x2381f0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2381F0u;
    {
        const bool branch_taken_0x2381f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2381F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2381F0u;
        // 0x2381f4: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2381f0) {
            ctx->pc = 0x23825Cu;
            goto label_23825c;
        }
    }
    ctx->pc = 0x2381F8u;
    // 0x2381f8: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x2381f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2381fc: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2381fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x238200: 0x10640017  beq         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x238200u;
    {
        const bool branch_taken_0x238200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x238204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238200u;
        // 0x238204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238200) {
            ctx->pc = 0x238260u;
            goto label_238260;
        }
    }
    ctx->pc = 0x238208u;
    // 0x238208: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x238208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x23820c: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x23820Cu;
    SET_GPR_U32(ctx, 31, 0x238214u);
    ctx->pc = 0x238210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23820Cu;
    // 0x238210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x23820Cu, 0x238214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238214u;
label_238214:
    // 0x238214: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x238214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x238218: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x238218u;
    SET_GPR_U32(ctx, 31, 0x238220u);
    ctx->pc = 0x23821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238218u;
    // 0x23821c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x238218u, 0x238220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238220u;
label_238220:
    // 0x238220: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x238220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x238224: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x238224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x238228: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x238228u;
    {
        const bool branch_taken_0x238228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238228u;
        // 0x23822c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238228) {
            ctx->pc = 0x238254u;
            goto label_238254;
        }
    }
    ctx->pc = 0x238230u;
    // 0x238230: 0x240601ba  addiu       $a2, $zero, 0x1BA
    ctx->pc = 0x238230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x238234: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x238234u;
    SET_GPR_U32(ctx, 31, 0x23823Cu);
    ctx->pc = 0x238238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238234u;
    // 0x238238: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x238234u, 0x23823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23823Cu;
label_23823c:
    // 0x23823c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x23823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x238240: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x238240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238244: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x238244u;
    SET_GPR_U32(ctx, 31, 0x23824Cu);
    ctx->pc = 0x238248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238244u;
    // 0x238248: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x238244u, 0x23824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23824Cu;
label_23824c:
    // 0x23824c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23824Cu;
    {
        const bool branch_taken_0x23824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23824Cu;
        // 0x238250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23824c) {
            ctx->pc = 0x238260u;
            goto label_238260;
        }
    }
    ctx->pc = 0x238254u;
label_238254:
    // 0x238254: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x238254u;
    {
        const bool branch_taken_0x238254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238254u;
        // 0x238258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238254) {
            ctx->pc = 0x238260u;
            goto label_238260;
        }
    }
    ctx->pc = 0x23825Cu;
label_23825c:
    // 0x23825c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23825cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_238260:
    // 0x238260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x238268: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23826c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23826cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x238270: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x238270u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238274: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x238274u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x238278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23827c: 0x3e00008  jr          $ra
    ctx->pc = 0x23827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23827Cu;
        // 0x238280: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238284u;
    // 0x238284: 0x0  nop
    ctx->pc = 0x238284u;
    // NOP
    ctx->pc = 0x238288u;
}
