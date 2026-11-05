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

// Function: sub_003D8C00
// Address: 0x3d8c00 - 0x3d8ca8
void sub_003D8C00_0x3d8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8C00_0x3d8c00");
#endif

    switch (ctx->pc) {
        case 0x3d8c40u: goto label_3d8c40;
        default: break;
    }

    ctx->pc = 0x3d8c00u;

    // 0x3d8c00: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3d8c00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8c04: 0x30a9ffff  andi        $t1, $a1, 0xFFFF
    ctx->pc = 0x3d8c04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3d8c08: 0x95430010  lhu         $v1, 0x10($t2)
    ctx->pc = 0x3d8c08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x3d8c0c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3D8C0Cu;
    {
        const bool branch_taken_0x3d8c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C0Cu;
        // 0x3d8c10: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c0c) {
            ctx->pc = 0x3D8CA0u;
            goto label_3d8ca0;
        }
    }
    ctx->pc = 0x3D8C14u;
    // 0x3d8c14: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x3d8c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3d8c18: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3D8C18u;
    {
        const bool branch_taken_0x3d8c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C18u;
        // 0x3d8c1c: 0x123102b  sltu        $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c18) {
            ctx->pc = 0x3D8CA0u;
            goto label_3d8ca0;
        }
    }
    ctx->pc = 0x3D8C20u;
    // 0x3d8c20: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3D8C20u;
    {
        const bool branch_taken_0x3d8c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C20u;
        // 0x3d8c24: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c20) {
            ctx->pc = 0x3D8CA0u;
            goto label_3d8ca0;
        }
    }
    ctx->pc = 0x3D8C28u;
    // 0x3d8c28: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3D8C28u;
    {
        const bool branch_taken_0x3d8c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C28u;
        // 0x3d8c2c: 0x25230001  addiu       $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c28) {
            ctx->pc = 0x3D8CA0u;
            goto label_3d8ca0;
        }
    }
    ctx->pc = 0x3D8C30u;
    // 0x3d8c30: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3d8c30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3d8c34: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x3d8c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d8c38: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D8C38u;
    {
        const bool branch_taken_0x3d8c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C38u;
        // 0x3d8c3c: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c38) {
            ctx->pc = 0x3D8C7Cu;
            goto label_3d8c7c;
        }
    }
    ctx->pc = 0x3D8C40u;
label_3d8c40:
    // 0x3d8c40: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x3d8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d8c44: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x3d8c44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3d8c48: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x3d8c48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3d8c4c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3d8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3d8c50: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d8c54: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3d8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3d8c58: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3d8c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d8c5c: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x3d8c5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3d8c60: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x3d8c60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3d8c64: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x3d8c64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3d8c68: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3d8c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3d8c6c: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3d8c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3d8c70: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3d8c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d8c74: 0x1060fff2  beqz        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3D8C74u;
    {
        const bool branch_taken_0x3d8c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C74u;
        // 0x3d8c78: 0xb4a20000  sdr         $v0, 0x0($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c74) {
            ctx->pc = 0x3D8C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8c40;
        }
    }
    ctx->pc = 0x3D8C7Cu;
label_3d8c7c:
    // 0x3d8c7c: 0x95440012  lhu         $a0, 0x12($t2)
    ctx->pc = 0x3d8c7cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 18)));
    // 0x3d8c80: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x3d8c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3d8c84: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D8C84u;
    {
        const bool branch_taken_0x3d8c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C84u;
        // 0x3d8c88: 0x123102b  sltu        $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c84) {
            ctx->pc = 0x3D8CA0u;
            goto label_3d8ca0;
        }
    }
    ctx->pc = 0x3D8C8Cu;
    // 0x3d8c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8C8Cu;
    {
        const bool branch_taken_0x3d8c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C8Cu;
        // 0x3d8c90: 0xc3102b  sltu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c8c) {
            ctx->pc = 0x3D8CA0u;
            goto label_3d8ca0;
        }
    }
    ctx->pc = 0x3D8C94u;
    // 0x3d8c94: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3D8C94u;
    {
        const bool branch_taken_0x3d8c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8C94u;
        // 0x3d8c98: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8c94) {
            ctx->pc = 0x3D8CA0u;
            goto label_3d8ca0;
        }
    }
    ctx->pc = 0x3D8C9Cu;
    // 0x3d8c9c: 0xa5420012  sh          $v0, 0x12($t2)
    ctx->pc = 0x3d8c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 18), (uint16_t)GPR_U32(ctx, 2));
label_3d8ca0:
    // 0x3d8ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8CA8u;
}
