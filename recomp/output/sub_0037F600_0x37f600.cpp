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

// Function: sub_0037F600
// Address: 0x37f600 - 0x37f668
void sub_0037F600_0x37f600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037F600_0x37f600");
#endif

    switch (ctx->pc) {
        case 0x37f600u: goto label_37f600;
        case 0x37f604u: goto label_37f604;
        case 0x37f608u: goto label_37f608;
        case 0x37f60cu: goto label_37f60c;
        case 0x37f610u: goto label_37f610;
        case 0x37f614u: goto label_37f614;
        case 0x37f618u: goto label_37f618;
        case 0x37f61cu: goto label_37f61c;
        case 0x37f620u: goto label_37f620;
        case 0x37f624u: goto label_37f624;
        case 0x37f628u: goto label_37f628;
        case 0x37f62cu: goto label_37f62c;
        case 0x37f630u: goto label_37f630;
        case 0x37f634u: goto label_37f634;
        case 0x37f638u: goto label_37f638;
        case 0x37f63cu: goto label_37f63c;
        case 0x37f640u: goto label_37f640;
        case 0x37f644u: goto label_37f644;
        case 0x37f648u: goto label_37f648;
        case 0x37f64cu: goto label_37f64c;
        case 0x37f650u: goto label_37f650;
        case 0x37f654u: goto label_37f654;
        case 0x37f658u: goto label_37f658;
        case 0x37f65cu: goto label_37f65c;
        case 0x37f660u: goto label_37f660;
        case 0x37f664u: goto label_37f664;
        default: break;
    }

    ctx->pc = 0x37f600u;

label_37f600:
    // 0x37f600: 0x3ef0800  .word       0x03EF0800                   # sll         $at, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f600u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
label_37f604:
    // 0x37f604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f608:
    // 0x37f608: 0x3ef1001  .word       0x03EF1001                   # INVALID     $ra, $t7, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f608u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37F608 raw=0x03EF1001");
label_37f60c:
    // 0x37f60c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f60cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f610:
    // 0x37f610: 0x3ef1802  .word       0x03EF1802                   # srl         $v1, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f610u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 15), 0));
label_37f614:
    // 0x37f614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f618:
    // 0x37f618: 0x3ef2003  .word       0x03EF2003                   # sra         $a0, $t7, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f618u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 15), 0));
label_37f61c:
    // 0x37f61c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f61cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f620:
    // 0x37f620: 0x3ef2804  sllv        $a1, $t7, $ra
    ctx->pc = 0x37f620u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_37f624:
    // 0x37f624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f628:
    // 0x37f628: 0x3ef3005  .word       0x03EF3005                   # INVALID     $ra, $t7, 0x3005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37f628u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37F628 raw=0x03EF3005");
label_37f62c:
    // 0x37f62c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f62cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f630:
    // 0x37f630: 0x3ef3806  srlv        $a3, $t7, $ra
    ctx->pc = 0x37f630u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_37f634:
    // 0x37f634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f638:
    // 0x37f638: 0x3ef4007  srav        $t0, $t7, $ra
    ctx->pc = 0x37f638u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 15), GPR_U32(ctx, 31) & 0x1F));
label_37f63c:
    // 0x37f63c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f63cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f640:
    // 0x37f640: 0x3ef4808  .word       0x03EF4808                   # jr          $ra # 000F4800 <InstrIdType: CPU_SPECIAL>
label_37f644:
    if (ctx->pc == 0x37F644u) {
        ctx->pc = 0x37F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F640u;
        // 0x37f644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F648u;
        goto label_37f648;
    }
    ctx->pc = 0x37F640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F640u;
        // 0x37f644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F648u;
label_37f648:
    // 0x37f648: 0x3ef5009  .word       0x03EF5009                   # jalr        $t2, $ra # 000F0000 <InstrIdType: CPU_SPECIAL>
label_37f64c:
    if (ctx->pc == 0x37F64Cu) {
        ctx->pc = 0x37F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F648u;
        // 0x37f64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37F650u;
        goto label_37f650;
    }
    ctx->pc = 0x37F648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 10, 0x37F650u);
        ctx->pc = 0x37F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F648u;
        // 0x37f64c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F648u, 0x37F650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37F650u;
label_37f650:
    // 0x37f650: 0x3ef580a  movz        $t3, $ra, $t7
    ctx->pc = 0x37f650u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 31));
label_37f654:
    // 0x37f654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37f658:
    // 0x37f658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37f658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_37f65c:
    // 0x37f65c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x37f65cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_37f660:
    // 0x37f660: 0x3ef600b  movn        $t4, $ra, $t7
    ctx->pc = 0x37f660u;
    if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 31));
label_37f664:
    // 0x37f664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37f664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37f668u;
}
