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

// Function: sub_0010DCC8
// Address: 0x10dcc8 - 0x10dd40
void sub_0010DCC8_0x10dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DCC8_0x10dcc8");
#endif

    switch (ctx->pc) {
        case 0x10dcc8u: goto label_10dcc8;
        case 0x10dcccu: goto label_10dccc;
        case 0x10dcd0u: goto label_10dcd0;
        case 0x10dcd4u: goto label_10dcd4;
        case 0x10dcd8u: goto label_10dcd8;
        case 0x10dcdcu: goto label_10dcdc;
        case 0x10dce0u: goto label_10dce0;
        case 0x10dce4u: goto label_10dce4;
        case 0x10dce8u: goto label_10dce8;
        case 0x10dcecu: goto label_10dcec;
        case 0x10dcf0u: goto label_10dcf0;
        case 0x10dcf4u: goto label_10dcf4;
        case 0x10dcf8u: goto label_10dcf8;
        case 0x10dcfcu: goto label_10dcfc;
        case 0x10dd00u: goto label_10dd00;
        case 0x10dd04u: goto label_10dd04;
        case 0x10dd08u: goto label_10dd08;
        case 0x10dd0cu: goto label_10dd0c;
        case 0x10dd10u: goto label_10dd10;
        case 0x10dd14u: goto label_10dd14;
        case 0x10dd18u: goto label_10dd18;
        case 0x10dd1cu: goto label_10dd1c;
        case 0x10dd20u: goto label_10dd20;
        case 0x10dd24u: goto label_10dd24;
        case 0x10dd28u: goto label_10dd28;
        case 0x10dd2cu: goto label_10dd2c;
        case 0x10dd30u: goto label_10dd30;
        case 0x10dd34u: goto label_10dd34;
        case 0x10dd38u: goto label_10dd38;
        case 0x10dd3cu: goto label_10dd3c;
        default: break;
    }

    ctx->pc = 0x10dcc8u;

label_10dcc8:
    // 0x10dcc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10dcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10dccc:
    // 0x10dccc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10dcd0:
    // 0x10dcd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10dcd4:
    // 0x10dcd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dcd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10dcd8:
    // 0x10dcd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10dcdc:
    // 0x10dcdc: 0xc04454a  jal         func_111528
label_10dce0:
    if (ctx->pc == 0x10DCE0u) {
        ctx->pc = 0x10DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCDCu;
        // 0x10dce0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCE4u;
        goto label_10dce4;
    }
    ctx->pc = 0x10DCDCu;
    SET_GPR_U32(ctx, 31, 0x10DCE4u);
    ctx->pc = 0x10DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCDCu;
    // 0x10dce0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111528u, 0x10DCDCu, 0x10DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCE4u;
label_10dce4:
    // 0x10dce4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10dce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_10dce8:
    // 0x10dce8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10dce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dcec:
    // 0x10dcec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10dcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10dcf0:
    // 0x10dcf0: 0xc047746  jal         func_11DD18
label_10dcf4:
    if (ctx->pc == 0x10DCF4u) {
        ctx->pc = 0x10DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCF0u;
        // 0x10dcf4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DCF8u;
        goto label_10dcf8;
    }
    ctx->pc = 0x10DCF0u;
    SET_GPR_U32(ctx, 31, 0x10DCF8u);
    ctx->pc = 0x10DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCF0u;
    // 0x10dcf4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DD18u, 0x10DCF0u, 0x10DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCF8u;
label_10dcf8:
    // 0x10dcf8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_10dcfc:
    // 0x10dcfc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x10dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_10dd00:
    // 0x10dd00: 0xc041dfc  jal         func_1077F0
label_10dd04:
    if (ctx->pc == 0x10DD04u) {
        ctx->pc = 0x10DD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD00u;
        // 0x10dd04: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD08u;
        goto label_10dd08;
    }
    ctx->pc = 0x10DD00u;
    SET_GPR_U32(ctx, 31, 0x10DD08u);
    ctx->pc = 0x10DD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DD00u;
    // 0x10dd04: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1077F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1077F0u, 0x10DD00u, 0x10DD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DD08u;
label_10dd08:
    // 0x10dd08: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x10dd08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_10dd0c:
    // 0x10dd0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10dd10:
    // 0x10dd10: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x10dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_10dd14:
    // 0x10dd14: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x10dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_10dd18:
    // 0x10dd18: 0x40f809  jalr        $v0
label_10dd1c:
    if (ctx->pc == 0x10DD1Cu) {
        ctx->pc = 0x10DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD18u;
        // 0x10dd1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD20u;
        goto label_10dd20;
    }
    ctx->pc = 0x10DD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10DD20u);
        ctx->pc = 0x10DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD18u;
        // 0x10dd1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD18u, 0x10DD20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DD20u;
label_10dd20:
    // 0x10dd20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10dd24:
    // 0x10dd24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10dd24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10dd28:
    // 0x10dd28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x10dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_10dd2c:
    // 0x10dd2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10dd30:
    // 0x10dd30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10dd34:
    // 0x10dd34: 0x3e00008  jr          $ra
label_10dd38:
    if (ctx->pc == 0x10DD38u) {
        ctx->pc = 0x10DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD34u;
        // 0x10dd38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DD3Cu;
        goto label_10dd3c;
    }
    ctx->pc = 0x10DD34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DD34u;
        // 0x10dd38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DD34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DD3Cu;
label_10dd3c:
    // 0x10dd3c: 0x0  nop
    ctx->pc = 0x10dd3cu;
    // NOP
    ctx->pc = 0x10dd40u;
}
