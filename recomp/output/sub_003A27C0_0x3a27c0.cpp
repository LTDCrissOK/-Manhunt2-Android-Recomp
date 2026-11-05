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

// Function: sub_003A27C0
// Address: 0x3a27c0 - 0x3a2848
void sub_003A27C0_0x3a27c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A27C0_0x3a27c0");
#endif

    switch (ctx->pc) {
        case 0x3a27d8u: goto label_3a27d8;
        case 0x3a27f4u: goto label_3a27f4;
        case 0x3a282cu: goto label_3a282c;
        default: break;
    }

    ctx->pc = 0x3a27c0u;

    // 0x3a27c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a27c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a27c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a27c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a27c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a27cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a27ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a27d0: 0xc0eb27a  jal         func_3AC9E8
    ctx->pc = 0x3A27D0u;
    SET_GPR_U32(ctx, 31, 0x3A27D8u);
    ctx->pc = 0x3A27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A27D0u;
    // 0x3a27d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9E8u, 0x3A27D0u, 0x3A27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A27D8u;
label_3a27d8:
    // 0x3a27d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a27dc: 0x24501dc8  addiu       $s0, $v0, 0x1DC8
    ctx->pc = 0x3a27dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7624));
    // 0x3a27e0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a27e0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x411DC8u));
    // 0x3a27e4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A27E4u;
    {
        const bool branch_taken_0x3a27e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a27e4) {
            ctx->pc = 0x3A2824u;
            goto label_3a2824;
        }
    }
    ctx->pc = 0x3A27ECu;
    // 0x3a27ec: 0xc0e89e4  jal         func_3A2790
    ctx->pc = 0x3A27ECu;
    SET_GPR_U32(ctx, 31, 0x3A27F4u);
    ctx->pc = 0x3A2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2790u, 0x3A27ECu, 0x3A27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A27F4u;
label_3a27f4:
    // 0x3a27f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a27f8: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x3a27f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3a27fc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a27fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a2800: 0x24631e28  addiu       $v1, $v1, 0x1E28
    ctx->pc = 0x3a2800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7720));
    // 0x3a2804: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3a2804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a2808: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a2808u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E28u));
    // 0x3a280c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3a280cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2810: 0xa2050003  sb          $a1, 0x3($s0)
    ctx->pc = 0x3a2810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x3a2814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a2818: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a2818u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a281c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a281cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E28u, _value); } while (0);
    // 0x3a2820: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a2820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3a2824:
    // 0x3a2824: 0xc0eb286  jal         func_3ACA18
    ctx->pc = 0x3A2824u;
    SET_GPR_U32(ctx, 31, 0x3A282Cu);
    ctx->pc = 0x3ACA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA18u, 0x3A2824u, 0x3A282Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A282Cu;
label_3a282c:
    // 0x3a282c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a282cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a2834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a2838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a283c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A283Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A283Cu;
        // 0x3a2840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A283Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2844u;
    // 0x3a2844: 0x0  nop
    ctx->pc = 0x3a2844u;
    // NOP
    ctx->pc = 0x3a2848u;
}
