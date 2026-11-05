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

// Function: sub_0016DCB0
// Address: 0x16dcb0 - 0x16dd38
void sub_0016DCB0_0x16dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DCB0_0x16dcb0");
#endif

    switch (ctx->pc) {
        case 0x16dcb0u: goto label_16dcb0;
        case 0x16dcb4u: goto label_16dcb4;
        case 0x16dcb8u: goto label_16dcb8;
        case 0x16dcbcu: goto label_16dcbc;
        case 0x16dcc0u: goto label_16dcc0;
        case 0x16dcc4u: goto label_16dcc4;
        case 0x16dcc8u: goto label_16dcc8;
        case 0x16dcccu: goto label_16dccc;
        case 0x16dcd0u: goto label_16dcd0;
        case 0x16dcd4u: goto label_16dcd4;
        case 0x16dcd8u: goto label_16dcd8;
        case 0x16dcdcu: goto label_16dcdc;
        case 0x16dce0u: goto label_16dce0;
        case 0x16dce4u: goto label_16dce4;
        case 0x16dce8u: goto label_16dce8;
        case 0x16dcecu: goto label_16dcec;
        case 0x16dcf0u: goto label_16dcf0;
        case 0x16dcf4u: goto label_16dcf4;
        case 0x16dcf8u: goto label_16dcf8;
        case 0x16dcfcu: goto label_16dcfc;
        case 0x16dd00u: goto label_16dd00;
        case 0x16dd04u: goto label_16dd04;
        case 0x16dd08u: goto label_16dd08;
        case 0x16dd0cu: goto label_16dd0c;
        case 0x16dd10u: goto label_16dd10;
        case 0x16dd14u: goto label_16dd14;
        case 0x16dd18u: goto label_16dd18;
        case 0x16dd1cu: goto label_16dd1c;
        case 0x16dd20u: goto label_16dd20;
        case 0x16dd24u: goto label_16dd24;
        case 0x16dd28u: goto label_16dd28;
        case 0x16dd2cu: goto label_16dd2c;
        case 0x16dd30u: goto label_16dd30;
        case 0x16dd34u: goto label_16dd34;
        default: break;
    }

    ctx->pc = 0x16dcb0u;

label_16dcb0:
    // 0x16dcb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16dcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16dcb4:
    // 0x16dcb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16dcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16dcb8:
    // 0x16dcb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16dcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16dcbc:
    // 0x16dcbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16dcc0:
    // 0x16dcc0: 0xc04f9a4  jal         func_13E690
label_16dcc4:
    if (ctx->pc == 0x16DCC4u) {
        ctx->pc = 0x16DCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC0u;
        // 0x16dcc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCC8u;
        goto label_16dcc8;
    }
    ctx->pc = 0x16DCC0u;
    SET_GPR_U32(ctx, 31, 0x16DCC8u);
    ctx->pc = 0x16DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCC0u;
    // 0x16dcc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16DCC0u, 0x16DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCC8u;
label_16dcc8:
    // 0x16dcc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dccc:
    // 0x16dccc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16dcd0:
    // 0x16dcd0: 0xae0300f4  sw          $v1, 0xF4($s0)
    ctx->pc = 0x16dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 3));
label_16dcd4:
    // 0x16dcd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16dcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16dcd8:
    // 0x16dcd8: 0xc04f8fc  jal         func_13E3F0
label_16dcdc:
    if (ctx->pc == 0x16DCDCu) {
        ctx->pc = 0x16DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCD8u;
        // 0x16dcdc: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCE0u;
        goto label_16dce0;
    }
    ctx->pc = 0x16DCD8u;
    SET_GPR_U32(ctx, 31, 0x16DCE0u);
    ctx->pc = 0x16DCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCD8u;
    // 0x16dcdc: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16DCD8u, 0x16DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCE0u;
label_16dce0:
    // 0x16dce0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x16dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_16dce4:
    // 0x16dce4: 0xc05a5fe  jal         func_1697F8
label_16dce8:
    if (ctx->pc == 0x16DCE8u) {
        ctx->pc = 0x16DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCE4u;
        // 0x16dce8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCECu;
        goto label_16dcec;
    }
    ctx->pc = 0x16DCE4u;
    SET_GPR_U32(ctx, 31, 0x16DCECu);
    ctx->pc = 0x16DCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCE4u;
    // 0x16dce8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16DCE4u, 0x16DCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCECu;
label_16dcec:
    // 0x16dcec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16dcf0:
    // 0x16dcf0: 0xc0461e8  jal         func_1187A0
label_16dcf4:
    if (ctx->pc == 0x16DCF4u) {
        ctx->pc = 0x16DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCF0u;
        // 0x16dcf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DCF8u;
        goto label_16dcf8;
    }
    ctx->pc = 0x16DCF0u;
    SET_GPR_U32(ctx, 31, 0x16DCF8u);
    ctx->pc = 0x16DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCF0u;
    // 0x16dcf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x16DCF0u, 0x16DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCF8u;
label_16dcf8:
    // 0x16dcf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16dcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dcfc:
    // 0x16dcfc: 0xc046104  jal         func_118410
label_16dd00:
    if (ctx->pc == 0x16DD00u) {
        ctx->pc = 0x16DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCFCu;
        // 0x16dd00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD04u;
        goto label_16dd04;
    }
    ctx->pc = 0x16DCFCu;
    SET_GPR_U32(ctx, 31, 0x16DD04u);
    ctx->pc = 0x16DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DCFCu;
    // 0x16dd00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x16DCFCu, 0x16DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD04u;
label_16dd04:
    // 0x16dd04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_16dd08:
    // 0x16dd08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16dd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16dd0c:
    // 0x16dd0c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x16dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_16dd10:
    // 0x16dd10: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x16dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_16dd14:
    // 0x16dd14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16dd18:
    // 0x16dd18: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16dd1c:
    // 0x16dd1c: 0x40f809  jalr        $v0
label_16dd20:
    if (ctx->pc == 0x16DD20u) {
        ctx->pc = 0x16DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD1Cu;
        // 0x16dd20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD24u;
        goto label_16dd24;
    }
    ctx->pc = 0x16DD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DD24u);
        ctx->pc = 0x16DD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD1Cu;
        // 0x16dd20: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DD1Cu, 0x16DD24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16DD24u;
label_16dd24:
    // 0x16dd24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dd24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16dd28:
    // 0x16dd28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16dd28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16dd2c:
    // 0x16dd2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16dd2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16dd30:
    // 0x16dd30: 0x3e00008  jr          $ra
label_16dd34:
    if (ctx->pc == 0x16DD34u) {
        ctx->pc = 0x16DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD30u;
        // 0x16dd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16DD38u;
        goto label_fallthrough_0x16dd30;
    }
    ctx->pc = 0x16DD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD30u;
        // 0x16dd34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16dd30:
    ctx->pc = 0x16DD38u;
}
