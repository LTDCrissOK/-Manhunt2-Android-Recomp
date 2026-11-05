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

// Function: sub_00136D68
// Address: 0x136d68 - 0x136e28
void sub_00136D68_0x136d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136D68_0x136d68");
#endif

    switch (ctx->pc) {
        case 0x136d90u: goto label_136d90;
        case 0x136da8u: goto label_136da8;
        case 0x136db4u: goto label_136db4;
        case 0x136dc0u: goto label_136dc0;
        case 0x136dccu: goto label_136dcc;
        case 0x136ddcu: goto label_136ddc;
        case 0x136dfcu: goto label_136dfc;
        default: break;
    }

    ctx->pc = 0x136d68u;

    // 0x136d68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136d6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136d70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136d74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x136d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x136d7c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x136d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136d88: 0xc04dabc  jal         func_136AF0
    ctx->pc = 0x136D88u;
    SET_GPR_U32(ctx, 31, 0x136D90u);
    ctx->pc = 0x136D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D88u;
    // 0x136d8c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136AF0u, 0x136D88u, 0x136D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136D90u;
label_136d90:
    // 0x136d90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136d94: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x136d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x136d98: 0x12300b  movn        $a2, $zero, $s2
    ctx->pc = 0x136d98u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x136d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136da0: 0xc045612  jal         func_115848
    ctx->pc = 0x136DA0u;
    SET_GPR_U32(ctx, 31, 0x136DA8u);
    ctx->pc = 0x136DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DA0u;
    // 0x136da4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x136DA0u, 0x136DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DA8u;
label_136da8:
    // 0x136da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136dac: 0xc045668  jal         func_1159A0
    ctx->pc = 0x136DACu;
    SET_GPR_U32(ctx, 31, 0x136DB4u);
    ctx->pc = 0x136DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DACu;
    // 0x136db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x136DACu, 0x136DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DB4u;
label_136db4:
    // 0x136db4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x136db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136db8: 0xc0456b2  jal         func_115AC8
    ctx->pc = 0x136DB8u;
    SET_GPR_U32(ctx, 31, 0x136DC0u);
    ctx->pc = 0x136DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DB8u;
    // 0x136dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AC8u, 0x136DB8u, 0x136DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DC0u;
label_136dc0:
    // 0x136dc0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x136dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x136dc4: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x136DC4u;
    SET_GPR_U32(ctx, 31, 0x136DCCu);
    ctx->pc = 0x136DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DC4u;
    // 0x136dc8: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x136DC4u, 0x136DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DCCu;
label_136dcc:
    // 0x136dcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x136dccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136dd4: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x136DD4u;
    SET_GPR_U32(ctx, 31, 0x136DDCu);
    ctx->pc = 0x136DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DD4u;
    // 0x136dd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x136DD4u, 0x136DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DDCu;
label_136ddc:
    // 0x136ddc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x136ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x136de0: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x136de0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x136de4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x136de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x136de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136dec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x136decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x136df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x136df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136df4: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x136DF4u;
    SET_GPR_U32(ctx, 31, 0x136DFCu);
    ctx->pc = 0x136DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136DF4u;
    // 0x136df8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x136DF4u, 0x136DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DFCu;
label_136dfc:
    // 0x136dfc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x136dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136e04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136e08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136e08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136e0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136e0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136e14: 0x3e00008  jr          $ra
    ctx->pc = 0x136E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E14u;
        // 0x136e18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136E1Cu;
    // 0x136e1c: 0x0  nop
    ctx->pc = 0x136e1cu;
    // NOP
    // 0x136e20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x136e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x136e24: 0x0  nop
    ctx->pc = 0x136e24u;
    // NOP
    ctx->pc = 0x136e28u;
}
