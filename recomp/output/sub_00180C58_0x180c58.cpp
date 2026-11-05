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

// Function: sub_00180C58
// Address: 0x180c58 - 0x180cf8
void sub_00180C58_0x180c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180C58_0x180c58");
#endif

    switch (ctx->pc) {
        case 0x180c78u: goto label_180c78;
        case 0x180c9cu: goto label_180c9c;
        case 0x180cc0u: goto label_180cc0;
        default: break;
    }

    ctx->pc = 0x180c58u;

    // 0x180c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180c5c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x180c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x180c60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180c64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x180c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x180c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x180c70: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x180c70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c74: 0x0  nop
    ctx->pc = 0x180c74u;
    // NOP
label_180c78:
    // 0x180c78: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x180c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180c7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x180c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180c80: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x180c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x180c84: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x180c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x180c88: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x180C88u;
    {
        const bool branch_taken_0x180c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C88u;
        // 0x180c8c: 0x46006b40  add.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180c88) {
            ctx->pc = 0x180C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180c78;
        }
    }
    ctx->pc = 0x180C90u;
    // 0x180c90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x180c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x180c94: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x180C94u;
    SET_GPR_U32(ctx, 31, 0x180C9Cu);
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x180C94u, 0x180C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C9Cu;
label_180c9c:
    // 0x180c9c: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x180c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x180ca0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x180ca0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x180ca4: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x180ca4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180ca8: 0x0  nop
    ctx->pc = 0x180ca8u;
    // NOP
    // 0x180cac: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x180CACu;
    {
        const bool branch_taken_0x180cac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x180CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CACu;
        // 0x180cb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cac) {
            ctx->pc = 0x180CE4u;
            goto label_180ce4;
        }
    }
    ctx->pc = 0x180CB4u;
    // 0x180cb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cb8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x180cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x180cbc: 0x0  nop
    ctx->pc = 0x180cbcu;
    // NOP
label_180cc0:
    // 0x180cc0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x180cc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x180cc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x180CC4u;
    {
        const bool branch_taken_0x180cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CC4u;
        // 0x180cc8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180cc4) {
            ctx->pc = 0x180CE4u;
            goto label_180ce4;
        }
    }
    ctx->pc = 0x180CCCu;
    // 0x180ccc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x180cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180cd0: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x180cd0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x180cd4: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x180cd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x180cd8: 0x0  nop
    ctx->pc = 0x180cd8u;
    // NOP
    // 0x180cdc: 0x4502fff8  bc1fl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x180CDCu;
    {
        const bool branch_taken_0x180cdc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x180cdc) {
            ctx->pc = 0x180CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180CDCu;
            // 0x180ce0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180cc0;
        }
    }
    ctx->pc = 0x180CE4u;
label_180ce4:
    // 0x180ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180ce8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x180ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180cec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x180CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180CF0u;
        // 0x180cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180CF8u;
}
