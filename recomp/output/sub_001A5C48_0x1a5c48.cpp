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

// Function: sub_001A5C48
// Address: 0x1a5c48 - 0x1a5d18
void sub_001A5C48_0x1a5c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5C48_0x1a5c48");
#endif

    switch (ctx->pc) {
        case 0x1a5cfcu: goto label_1a5cfc;
        default: break;
    }

    ctx->pc = 0x1a5c48u;

    // 0x1a5c48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5c4c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1a5c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a5c54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a5c58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a5c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5c60: 0x8e22015c  lw          $v0, 0x15C($s1)
    ctx->pc = 0x1a5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 348)));
    // 0x1a5c64: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5C64u;
    {
        const bool branch_taken_0x1a5c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A5C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C64u;
        // 0x1a5c68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c64) {
            ctx->pc = 0x1A5C8Cu;
            goto label_1a5c8c;
        }
    }
    ctx->pc = 0x1A5C6Cu;
    // 0x1a5c6c: 0x2602fff3  addiu       $v0, $s0, -0xD
    ctx->pc = 0x1a5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967283));
    // 0x1a5c70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a5c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a5c74: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5C74u;
    {
        const bool branch_taken_0x1a5c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c74) {
            ctx->pc = 0x1A5C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C74u;
            // 0x1a5c78: 0xae23015c  sw          $v1, 0x15C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5C8Cu;
            goto label_1a5c8c;
        }
    }
    ctx->pc = 0x1A5C7Cu;
    // 0x1a5c7c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1a5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a5c80: 0x56020020  bnel        $s0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A5C80u;
    {
        const bool branch_taken_0x1a5c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5c80) {
            ctx->pc = 0x1A5C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5C80u;
            // 0x1a5c84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D04u;
            goto label_1a5d04;
        }
    }
    ctx->pc = 0x1A5C88u;
    // 0x1a5c88: 0xae23015c  sw          $v1, 0x15C($s1)
    ctx->pc = 0x1a5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 3));
label_1a5c8c:
    // 0x1a5c8c: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x1a5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x1a5c90: 0x10c2001a  beq         $a2, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A5C90u;
    {
        const bool branch_taken_0x1a5c90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C90u;
        // 0x1a5c94: 0x2a02004f  slti        $v0, $s0, 0x4F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)79) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c90) {
            ctx->pc = 0x1A5CFCu;
            goto label_1a5cfc;
        }
    }
    ctx->pc = 0x1A5C98u;
    // 0x1a5c98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A5C98u;
    {
        const bool branch_taken_0x1a5c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C98u;
        // 0x1a5c9c: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c98) {
            ctx->pc = 0x1A5CF0u;
            goto label_1a5cf0;
        }
    }
    ctx->pc = 0x1A5CA0u;
    // 0x1a5ca0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1a5ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a5ca4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1a5ca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a5ca8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1a5cac: 0x24426a00  addiu       $v0, $v0, 0x6A00
    ctx->pc = 0x1a5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27136));
    // 0x1a5cb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a5cb4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1a5cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1a5cb8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A5CB8u;
    {
        const bool branch_taken_0x1a5cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CB8u;
        // 0x1a5cbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cb8) {
            ctx->pc = 0x1A5CF4u;
            goto label_1a5cf4;
        }
    }
    ctx->pc = 0x1A5CC0u;
    // 0x1a5cc0: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x1a5cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1a5cc4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1a5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a5cc8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a5ccc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a5cd0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5CD0u;
    {
        const bool branch_taken_0x1a5cd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a5cd0) {
            ctx->pc = 0x1A5CE0u;
            goto label_1a5ce0;
        }
    }
    ctx->pc = 0x1A5CD8u;
    // 0x1a5cd8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1A5CD8u;
    {
        const bool branch_taken_0x1a5cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CD8u;
        // 0x1a5cdc: 0xae24014c  sw          $a0, 0x14C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cd8) {
            ctx->pc = 0x1A5D00u;
            goto label_1a5d00;
        }
    }
    ctx->pc = 0x1A5CE0u;
label_1a5ce0:
    // 0x1a5ce0: 0x16040004  bne         $s0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5CE0u;
    {
        const bool branch_taken_0x1a5ce0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CE0u;
        // 0x1a5ce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ce0) {
            ctx->pc = 0x1A5CF4u;
            goto label_1a5cf4;
        }
    }
    ctx->pc = 0x1A5CE8u;
    // 0x1a5ce8: 0x38c2080d  xori        $v0, $a2, 0x80D
    ctx->pc = 0x1a5ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2061);
    // 0x1a5cec: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x1a5cecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_1a5cf0:
    // 0x1a5cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cf4:
    // 0x1a5cf4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x1A5CF4u;
    SET_GPR_U32(ctx, 31, 0x1A5CFCu);
    ctx->pc = 0x1A5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CF4u;
    // 0x1a5cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x1A5CF4u, 0x1A5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CFCu;
label_1a5cfc:
    // 0x1a5cfc: 0xae30014c  sw          $s0, 0x14C($s1)
    ctx->pc = 0x1a5cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 16));
label_1a5d00:
    // 0x1a5d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5d04:
    // 0x1a5d04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a5d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a5d08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a5d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a5d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A5D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D0Cu;
        // 0x1a5d10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5D14u;
    // 0x1a5d14: 0x0  nop
    ctx->pc = 0x1a5d14u;
    // NOP
    ctx->pc = 0x1a5d18u;
}
