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

// Function: sub_003E3C60
// Address: 0x3e3c60 - 0x3e3d40
void sub_003E3C60_0x3e3c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3C60_0x3e3c60");
#endif

    switch (ctx->pc) {
        case 0x3e3c78u: goto label_3e3c78;
        case 0x3e3ca0u: goto label_3e3ca0;
        case 0x3e3cacu: goto label_3e3cac;
        case 0x3e3cc4u: goto label_3e3cc4;
        case 0x3e3cd4u: goto label_3e3cd4;
        case 0x3e3cf8u: goto label_3e3cf8;
        case 0x3e3d18u: goto label_3e3d18;
        default: break;
    }

    ctx->pc = 0x3e3c60u;

    // 0x3e3c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e3c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e3c64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e3c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e3c68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e3c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e3c6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e3c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e3c70: 0xc0f8f16  jal         func_3E3C58
    ctx->pc = 0x3E3C70u;
    SET_GPR_U32(ctx, 31, 0x3E3C78u);
    ctx->pc = 0x3E3C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3C70u;
    // 0x3e3c74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3C58u, 0x3E3C70u, 0x3E3C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3C78u;
label_3e3c78:
    // 0x3e3c78: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3e3c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e3c7c: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3E3C7Cu;
    {
        const bool branch_taken_0x3e3c7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3C7Cu;
        // 0x3e3c80: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3c7c) {
            ctx->pc = 0x3E3CC4u;
            goto label_3e3cc4;
        }
    }
    ctx->pc = 0x3E3C84u;
    // 0x3e3c84: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x3e3c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x3e3c88: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x3e3c88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e3c8c: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x3e3c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3e3c90: 0x50b0000a  beql        $a1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E3C90u;
    {
        const bool branch_taken_0x3e3c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e3c90) {
            ctx->pc = 0x3E3C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3C90u;
            // 0x3e3c94: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3CBCu;
            goto label_3e3cbc;
        }
    }
    ctx->pc = 0x3E3C98u;
    // 0x3e3c98: 0x2610ffb0  addiu       $s0, $s0, -0x50
    ctx->pc = 0x3e3c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
    // 0x3e3c9c: 0x0  nop
    ctx->pc = 0x3e3c9cu;
    // NOP
label_3e3ca0:
    // 0x3e3ca0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e3ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ca4: 0xc0aae4e  jal         func_2AB938
    ctx->pc = 0x3E3CA4u;
    SET_GPR_U32(ctx, 31, 0x3E3CACu);
    ctx->pc = 0x3E3CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CA4u;
    // 0x3e3ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB938u, 0x3E3CA4u, 0x3E3CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CACu;
label_3e3cac:
    // 0x3e3cac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e3cb0: 0x1450fffb  bne         $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3CB0u;
    {
        const bool branch_taken_0x3e3cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E3CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CB0u;
        // 0x3e3cb4: 0x2610ffb0  addiu       $s0, $s0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cb0) {
            ctx->pc = 0x3E3CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3ca0;
        }
    }
    ctx->pc = 0x3E3CB8u;
    // 0x3e3cb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e3cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e3cbc:
    // 0x3e3cbc: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E3CBCu;
    SET_GPR_U32(ctx, 31, 0x3E3CC4u);
    ctx->pc = 0x3E3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CBCu;
    // 0x3e3cc0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E3CBCu, 0x3E3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CC4u;
label_3e3cc4:
    // 0x3e3cc4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e3cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3e3cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e3cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ccc: 0xc0f8dcc  jal         func_3E3730
    ctx->pc = 0x3E3CCCu;
    SET_GPR_U32(ctx, 31, 0x3E3CD4u);
    ctx->pc = 0x3E3CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3CCCu;
    // 0x3e3cd0: 0x26300008  addiu       $s0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3730u, 0x3E3CCCu, 0x3E3CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3CD4u;
label_3e3cd4:
    // 0x3e3cd4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e3cd8: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x3E3CD8u;
    {
        const bool branch_taken_0x3e3cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e3cd8) {
            ctx->pc = 0x3E3CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3CD8u;
            // 0x3e3cdc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E3D1Cu;
            goto label_3e3d1c;
        }
    }
    ctx->pc = 0x3E3CE0u;
    // 0x3e3ce0: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e3ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3e3ce4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e3ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e3cec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3e3cf0: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3CF0u;
    {
        const bool branch_taken_0x3e3cf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3CF0u;
        // 0x3e3cf4: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3cf0) {
            ctx->pc = 0x3E3D10u;
            goto label_3e3d10;
        }
    }
    ctx->pc = 0x3E3CF8u;
label_3e3cf8:
    // 0x3e3cf8: 0x0  nop
    ctx->pc = 0x3e3cf8u;
    // NOP
    // 0x3e3cfc: 0x0  nop
    ctx->pc = 0x3e3cfcu;
    // NOP
    // 0x3e3d00: 0x0  nop
    ctx->pc = 0x3e3d00u;
    // NOP
    // 0x3e3d04: 0x0  nop
    ctx->pc = 0x3e3d04u;
    // NOP
    // 0x3e3d08: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3D08u;
    {
        const bool branch_taken_0x3e3d08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E3D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D08u;
        // 0x3e3d0c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3d08) {
            ctx->pc = 0x3E3CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3cf8;
        }
    }
    ctx->pc = 0x3E3D10u;
label_3e3d10:
    // 0x3e3d10: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E3D10u;
    SET_GPR_U32(ctx, 31, 0x3E3D18u);
    ctx->pc = 0x3E3D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3D10u;
    // 0x3e3d14: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E3D10u, 0x3E3D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3D18u;
label_3e3d18:
    // 0x3e3d18: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3e3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3e3d1c:
    // 0x3e3d1c: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x3e3d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e3d20: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x3e3d20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e3d24: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3e3d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3e3d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e3d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e3d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e3d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e3d30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e3d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e3d34: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3D34u;
        // 0x3e3d38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3D3Cu;
    // 0x3e3d3c: 0x0  nop
    ctx->pc = 0x3e3d3cu;
    // NOP
    ctx->pc = 0x3e3d40u;
}
