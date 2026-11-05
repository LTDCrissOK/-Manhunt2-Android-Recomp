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

// Function: sub_003B3C90
// Address: 0x3b3c90 - 0x3b3d80
void sub_003B3C90_0x3b3c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3C90_0x3b3c90");
#endif

    switch (ctx->pc) {
        case 0x3b3d40u: goto label_3b3d40;
        case 0x3b3d5cu: goto label_3b3d5c;
        case 0x3b3d68u: goto label_3b3d68;
        default: break;
    }

    ctx->pc = 0x3b3c90u;

    // 0x3b3c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b3c94: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3C94u;
    {
        const bool branch_taken_0x3b3c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C94u;
        // 0x3b3c98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c94) {
            ctx->pc = 0x3B3CB0u;
            goto label_3b3cb0;
        }
    }
    ctx->pc = 0x3B3C9Cu;
    // 0x3b3c9c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b3ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3ca4: 0x24840548  addiu       $a0, $a0, 0x548
    ctx->pc = 0x3b3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1352));
    // 0x3b3ca8: 0x80ecddc  j           func_3B3770
    ctx->pc = 0x3B3CA8u;
    ctx->pc = 0x3B3CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CA8u;
    // 0x3b3cac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3770u;
    sub_003B3770_0x3b3770(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3CB0u;
label_3b3cb0:
    // 0x3b3cb0: 0x24a3007f  addiu       $v1, $a1, 0x7F
    ctx->pc = 0x3b3cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    // 0x3b3cb4: 0x2c6200ff  sltiu       $v0, $v1, 0xFF
    ctx->pc = 0x3b3cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x3b3cb8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3CB8u;
    {
        const bool branch_taken_0x3b3cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3cb8) {
            ctx->pc = 0x3B3CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3CB8u;
            // 0x3b3cbc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3CDCu;
            goto label_3b3cdc;
        }
    }
    ctx->pc = 0x3B3CC0u;
    // 0x3b3cc0: 0x28c2ff81  slti        $v0, $a2, -0x7F
    ctx->pc = 0x3b3cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967169) ? 1 : 0);
    // 0x3b3cc4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3CC4u;
    {
        const bool branch_taken_0x3b3cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3cc4) {
            ctx->pc = 0x3B3CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3CC4u;
            // 0x3b3cc8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3CDCu;
            goto label_3b3cdc;
        }
    }
    ctx->pc = 0x3B3CCCu;
    // 0x3b3ccc: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x3b3cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3b3cd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3CD0u;
    {
        const bool branch_taken_0x3b3cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CD0u;
        // 0x3b3cd4: 0x24a7ff81  addiu       $a3, $a1, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cd0) {
            ctx->pc = 0x3B3CF0u;
            goto label_3b3cf0;
        }
    }
    ctx->pc = 0x3B3CD8u;
    // 0x3b3cd8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3b3cdc:
    // 0x3b3cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3ce0: 0x24840570  addiu       $a0, $a0, 0x570
    ctx->pc = 0x3b3ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1392));
    // 0x3b3ce4: 0x80ecddc  j           func_3B3770
    ctx->pc = 0x3B3CE4u;
    ctx->pc = 0x3B3CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CE4u;
    // 0x3b3ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3770u;
    sub_003B3770_0x3b3770(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3CECu;
    // 0x3b3cec: 0x0  nop
    ctx->pc = 0x3b3cecu;
    // NOP
label_3b3cf0:
    // 0x3b3cf0: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B3CF0u;
    {
        const bool branch_taken_0x3b3cf0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3B3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CF0u;
        // 0x3b3cf4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cf0) {
            ctx->pc = 0x3B3CFCu;
            goto label_3b3cfc;
        }
    }
    ctx->pc = 0x3B3CF8u;
    // 0x3b3cf8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3b3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_3b3cfc:
    // 0x3b3cfc: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3CFCu;
    {
        const bool branch_taken_0x3b3cfc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3B3D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CFCu;
        // 0x3b3d00: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3cfc) {
            ctx->pc = 0x3B3D0Cu;
            goto label_3b3d0c;
        }
    }
    ctx->pc = 0x3B3D04u;
    // 0x3b3d04: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3b3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3b3d08: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x3b3d08u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3b3d0c:
    // 0x3b3d0c: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x3b3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x3b3d10: 0x24c3ff81  addiu       $v1, $a2, -0x7F
    ctx->pc = 0x3b3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967169));
    // 0x3b3d14: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3B3D14u;
    {
        const bool branch_taken_0x3b3d14 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3b3d14) {
            ctx->pc = 0x3B3D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3D14u;
            // 0x3b3d18: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3D1Cu;
            goto label_3b3d1c;
        }
    }
    ctx->pc = 0x3B3D1Cu;
label_3b3d1c:
    // 0x3b3d1c: 0xac870020  sw          $a3, 0x20($a0)
    ctx->pc = 0x3b3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x3b3d20: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3D20u;
    {
        const bool branch_taken_0x3b3d20 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3B3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D20u;
        // 0x3b3d24: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d20) {
            ctx->pc = 0x3B3D30u;
            goto label_3b3d30;
        }
    }
    ctx->pc = 0x3B3D28u;
    // 0x3b3d28: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3b3d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3b3d2c: 0x461823  subu        $v1, $v0, $a2
    ctx->pc = 0x3b3d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3b3d30:
    // 0x3b3d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b3d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3d34: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x3b3d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x3b3d38: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D38u;
        // 0x3b3d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3D40u;
label_3b3d40:
    // 0x3b3d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b3d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3d50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b3d54: 0xc0ecdba  jal         func_3B36E8
    ctx->pc = 0x3B3D54u;
    SET_GPR_U32(ctx, 31, 0x3B3D5Cu);
    ctx->pc = 0x3B3D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D54u;
    // 0x3b3d58: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B36E8u, 0x3B3D54u, 0x3B3D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D5Cu;
label_3b3d5c:
    // 0x3b3d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3d60: 0xc0ecf60  jal         func_3B3D80
    ctx->pc = 0x3B3D60u;
    SET_GPR_U32(ctx, 31, 0x3B3D68u);
    ctx->pc = 0x3B3D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D60u;
    // 0x3b3d64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3D80u, 0x3B3D60u, 0x3B3D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3D68u;
label_3b3d68:
    // 0x3b3d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3d6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b3d6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3d74: 0x80ecdc0  j           func_3B3700
    ctx->pc = 0x3B3D74u;
    ctx->pc = 0x3B3D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3D74u;
    // 0x3b3d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3700u;
    sub_003B3700_0x3b3700(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3D7Cu;
    // 0x3b3d7c: 0x0  nop
    ctx->pc = 0x3b3d7cu;
    // NOP
    ctx->pc = 0x3b3d80u;
}
