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

// Function: sub_001E8C28
// Address: 0x1e8c28 - 0x1e8d18
void sub_001E8C28_0x1e8c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8C28_0x1e8c28");
#endif

    switch (ctx->pc) {
        case 0x1e8c88u: goto label_1e8c88;
        case 0x1e8cbcu: goto label_1e8cbc;
        default: break;
    }

    ctx->pc = 0x1e8c28u;

    // 0x1e8c28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e8c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e8c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8c34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e8c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e8c38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e8c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e8c3c: 0x24d1ffff  addiu       $s1, $a2, -0x1
    ctx->pc = 0x1e8c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1e8c40: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1e8c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1e8c44: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1e8c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c48: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1e8c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1e8c4c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1e8c4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c50: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1e8c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1e8c54: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e8c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c58: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1e8c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1e8c5c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1e8c5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c60: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e8c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e8c64: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1e8c64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c68: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1e8c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1e8c6c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e8c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e8c70: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E8C70u;
    {
        const bool branch_taken_0x1e8c70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8C70u;
        // 0x1e8c74: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8c70) {
            ctx->pc = 0x1E8CE8u;
            goto label_1e8ce8;
        }
    }
    ctx->pc = 0x1E8C78u;
    // 0x1e8c78: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x1e8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e8c7c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x1e8c7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e8c80: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x1e8c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e8c84: 0x678021  addu        $s0, $v1, $a3
    ctx->pc = 0x1e8c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1e8c88:
    // 0x1e8c88: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1e8c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e8c8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e8c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c90: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1e8c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e8c94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e8c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8c98: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x1e8c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e8c9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e8c9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8ca0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1e8ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e8ca4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1e8ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8ca8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1e8ca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e8cac: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x1e8cacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e8cb0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1e8cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e8cb4: 0xc07a3a8  jal         func_1E8EA0
    ctx->pc = 0x1E8CB4u;
    SET_GPR_U32(ctx, 31, 0x1E8CBCu);
    ctx->pc = 0x1E8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8CB4u;
    // 0x1e8cb8: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EA0u, 0x1E8CB4u, 0x1E8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8CBCu;
label_1e8cbc:
    // 0x1e8cbc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E8CBCu;
    {
        const bool branch_taken_0x1e8cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CBCu;
        // 0x1e8cc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8cbc) {
            ctx->pc = 0x1E8CE0u;
            goto label_1e8ce0;
        }
    }
    ctx->pc = 0x1E8CC4u;
    // 0x1e8cc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e8cc8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1e8cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e8ccc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1e8cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e8cd0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1e8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1e8cd4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e8cd8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1e8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1e8cdc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1e8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1e8ce0:
    // 0x1e8ce0: 0x1637ffe9  bne         $s1, $s7, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1E8CE0u;
    {
        const bool branch_taken_0x1e8ce0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        ctx->pc = 0x1E8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8CE0u;
        // 0x1e8ce4: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8ce0) {
            ctx->pc = 0x1E8C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8c88;
        }
    }
    ctx->pc = 0x1E8CE8u;
label_1e8ce8:
    // 0x1e8ce8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1e8ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8cec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e8cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8cf0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e8cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e8cf4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e8cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8cf8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1e8cf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e8cfc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1e8cfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8d00: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1e8d00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1e8d04: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1e8d04u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e8d08: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1e8d08u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e8d0c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e8d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e8d10: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8D10u;
        // 0x1e8d14: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8D18u;
}
