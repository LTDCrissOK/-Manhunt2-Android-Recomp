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

// Function: sub_002C3CA0
// Address: 0x2c3ca0 - 0x2c3d70
void sub_002C3CA0_0x2c3ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3CA0_0x2c3ca0");
#endif

    switch (ctx->pc) {
        case 0x2c3ca0u: goto label_2c3ca0;
        case 0x2c3ca4u: goto label_2c3ca4;
        case 0x2c3ca8u: goto label_2c3ca8;
        case 0x2c3cacu: goto label_2c3cac;
        case 0x2c3cb0u: goto label_2c3cb0;
        case 0x2c3cb4u: goto label_2c3cb4;
        case 0x2c3cb8u: goto label_2c3cb8;
        case 0x2c3cbcu: goto label_2c3cbc;
        case 0x2c3cc0u: goto label_2c3cc0;
        case 0x2c3cc4u: goto label_2c3cc4;
        case 0x2c3cc8u: goto label_2c3cc8;
        case 0x2c3cccu: goto label_2c3ccc;
        case 0x2c3cd0u: goto label_2c3cd0;
        case 0x2c3cd4u: goto label_2c3cd4;
        case 0x2c3cd8u: goto label_2c3cd8;
        case 0x2c3cdcu: goto label_2c3cdc;
        case 0x2c3ce0u: goto label_2c3ce0;
        case 0x2c3ce4u: goto label_2c3ce4;
        case 0x2c3ce8u: goto label_2c3ce8;
        case 0x2c3cecu: goto label_2c3cec;
        case 0x2c3cf0u: goto label_2c3cf0;
        case 0x2c3cf4u: goto label_2c3cf4;
        case 0x2c3cf8u: goto label_2c3cf8;
        case 0x2c3cfcu: goto label_2c3cfc;
        case 0x2c3d00u: goto label_2c3d00;
        case 0x2c3d04u: goto label_2c3d04;
        case 0x2c3d08u: goto label_2c3d08;
        case 0x2c3d0cu: goto label_2c3d0c;
        case 0x2c3d10u: goto label_2c3d10;
        case 0x2c3d14u: goto label_2c3d14;
        case 0x2c3d18u: goto label_2c3d18;
        case 0x2c3d1cu: goto label_2c3d1c;
        case 0x2c3d20u: goto label_2c3d20;
        case 0x2c3d24u: goto label_2c3d24;
        case 0x2c3d28u: goto label_2c3d28;
        case 0x2c3d2cu: goto label_2c3d2c;
        case 0x2c3d30u: goto label_2c3d30;
        case 0x2c3d34u: goto label_2c3d34;
        case 0x2c3d38u: goto label_2c3d38;
        case 0x2c3d3cu: goto label_2c3d3c;
        case 0x2c3d40u: goto label_2c3d40;
        case 0x2c3d44u: goto label_2c3d44;
        case 0x2c3d48u: goto label_2c3d48;
        case 0x2c3d4cu: goto label_2c3d4c;
        case 0x2c3d50u: goto label_2c3d50;
        case 0x2c3d54u: goto label_2c3d54;
        case 0x2c3d58u: goto label_2c3d58;
        case 0x2c3d5cu: goto label_2c3d5c;
        case 0x2c3d60u: goto label_2c3d60;
        case 0x2c3d64u: goto label_2c3d64;
        case 0x2c3d68u: goto label_2c3d68;
        case 0x2c3d6cu: goto label_2c3d6c;
        default: break;
    }

    ctx->pc = 0x2c3ca0u;

label_2c3ca0:
    // 0x2c3ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c3ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c3ca4:
    // 0x2c3ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3ca8:
    // 0x2c3ca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3cac:
    // 0x2c3cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c3cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cb0:
    // 0x2c3cb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c3cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c3cb4:
    // 0x2c3cb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cb8:
    // 0x2c3cb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c3cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c3cbc:
    // 0x2c3cbc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2c3cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cc0:
    // 0x2c3cc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c3cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2c3cc4:
    // 0x2c3cc4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c3cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cc8:
    // 0x2c3cc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c3cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2c3ccc:
    // 0x2c3ccc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c3cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cd0:
    // 0x2c3cd0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2c3cd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2c3cd4:
    // 0x2c3cd4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c3cd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cd8:
    // 0x2c3cd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c3cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c3cdc:
    // 0x2c3cdc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c3cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3ce0:
    // 0x2c3ce0: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c3ce0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c3ce4:
    // 0x2c3ce4: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
label_2c3ce8:
    if (ctx->pc == 0x2C3CE8u) {
        ctx->pc = 0x2C3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CE4u;
        // 0x2c3ce8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3CECu;
        goto label_2c3cec;
    }
    ctx->pc = 0x2C3CE4u;
    {
        const bool branch_taken_0x2c3ce4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3CE4u;
        // 0x2c3ce8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ce4) {
            ctx->pc = 0x2C3D34u;
            goto label_2c3d34;
        }
    }
    ctx->pc = 0x2C3CECu;
label_2c3cec:
    // 0x2c3cec: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2c3cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3cf0:
    // 0x2c3cf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c3cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c3cf4:
    // 0x2c3cf4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c3cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cf8:
    // 0x2c3cf8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c3cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c3cfc:
    // 0x2c3cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c3d00:
    // 0x2c3d00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2c3d00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2c3d04:
    // 0x2c3d04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3d08:
    // 0x2c3d08: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c3d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d0c:
    // 0x2c3d0c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2c3d0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c3d10:
    // 0x2c3d10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c3d14:
    // 0x2c3d14: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2c3d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2c3d18:
    // 0x2c3d18: 0x40f809  jalr        $v0
label_2c3d1c:
    if (ctx->pc == 0x2C3D1Cu) {
        ctx->pc = 0x2C3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D18u;
        // 0x2c3d1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D20u;
        goto label_2c3d20;
    }
    ctx->pc = 0x2C3D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3D20u);
        ctx->pc = 0x2C3D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D18u;
        // 0x2c3d1c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D18u, 0x2C3D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3D20u;
label_2c3d20:
    // 0x2c3d20: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c3d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3d24:
    // 0x2c3d24: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c3d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c3d28:
    // 0x2c3d28: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c3d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c3d2c:
    // 0x2c3d2c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_2c3d30:
    if (ctx->pc == 0x2C3D30u) {
        ctx->pc = 0x2C3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D2Cu;
        // 0x2c3d30: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D34u;
        goto label_2c3d34;
    }
    ctx->pc = 0x2C3D2Cu;
    {
        const bool branch_taken_0x2c3d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3d2c) {
            ctx->pc = 0x2C3D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3D2Cu;
            // 0x2c3d30: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3cf0;
        }
    }
    ctx->pc = 0x2C3D34u;
label_2c3d34:
    // 0x2c3d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3d38:
    // 0x2c3d38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3d38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3d3c:
    // 0x2c3d3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c3d3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3d40:
    // 0x2c3d40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c3d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c3d44:
    // 0x2c3d44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c3d44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3d48:
    // 0x2c3d48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c3d48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c3d4c:
    // 0x2c3d4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c3d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c3d50:
    // 0x2c3d50: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2c3d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c3d54:
    // 0x2c3d54: 0x3e00008  jr          $ra
label_2c3d58:
    if (ctx->pc == 0x2C3D58u) {
        ctx->pc = 0x2C3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D54u;
        // 0x2c3d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3D5Cu;
        goto label_2c3d5c;
    }
    ctx->pc = 0x2C3D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3D54u;
        // 0x2c3d58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3D5Cu;
label_2c3d5c:
    // 0x2c3d5c: 0x0  nop
    ctx->pc = 0x2c3d5cu;
    // NOP
label_2c3d60:
    // 0x2c3d60: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c3d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2c3d64:
    // 0x2c3d64: 0x0  nop
    ctx->pc = 0x2c3d64u;
    // NOP
label_2c3d68:
    // 0x2c3d68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c3d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c3d6c:
    // 0x2c3d6c: 0x0  nop
    ctx->pc = 0x2c3d6cu;
    // NOP
    ctx->pc = 0x2c3d70u;
}
