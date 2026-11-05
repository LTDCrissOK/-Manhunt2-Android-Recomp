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

// Function: sub_002D74B8
// Address: 0x2d74b8 - 0x2d75a0
void sub_002D74B8_0x2d74b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D74B8_0x2d74b8");
#endif

    switch (ctx->pc) {
        case 0x2d74ecu: goto label_2d74ec;
        case 0x2d7538u: goto label_2d7538;
        case 0x2d754cu: goto label_2d754c;
        case 0x2d7574u: goto label_2d7574;
        default: break;
    }

    ctx->pc = 0x2d74b8u;

    // 0x2d74b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d74b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d74bc: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2d74bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2d74c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d74c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d74c4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2d74c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2d74c8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2d74c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2d74cc: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x2d74ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2d74d0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2d74d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2d74d4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2d74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2d74d8: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x2d74d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
    // 0x2d74dc: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2d74dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2d74e0: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x2d74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x2d74e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D74E4u;
    SET_GPR_U32(ctx, 31, 0x2D74ECu);
    ctx->pc = 0x2D74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D74E4u;
    // 0x2d74e8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D74E4u, 0x2D74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D74ECu;
label_2d74ec:
    // 0x2d74ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2d74ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2d74f0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d74f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2d74f4: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x2d74f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d74f8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2d74f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d74fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7500: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d7504: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d7504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7508: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x2d7508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x2d750c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2d750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7510: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x2d7510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
    // 0x2d7514: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d7514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d7518: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2d7518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2d751c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2d751cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d7520: 0x839021  addu        $s2, $a0, $v1
    ctx->pc = 0x2d7520u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d7524: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x2d7524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d7528: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D7528u;
    {
        const bool branch_taken_0x2d7528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7528u;
        // 0x2d752c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7528) {
            ctx->pc = 0x2D7588u;
            goto label_2d7588;
        }
    }
    ctx->pc = 0x2D7530u;
    // 0x2d7530: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2d7530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d7534: 0x0  nop
    ctx->pc = 0x2d7534u;
    // NOP
label_2d7538:
    // 0x2d7538: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x2d7538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2d753c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2d753cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2d7540: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7544: 0xc0b5e62  jal         func_2D7988
    ctx->pc = 0x2D7544u;
    SET_GPR_U32(ctx, 31, 0x2D754Cu);
    ctx->pc = 0x2D7548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7544u;
    // 0x2d7548: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7988u, 0x2D7544u, 0x2D754Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D754Cu;
label_2d754c:
    // 0x2d754c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D754Cu;
    {
        const bool branch_taken_0x2d754c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D754Cu;
        // 0x2d7550: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d754c) {
            ctx->pc = 0x2D7584u;
            goto label_2d7584;
        }
    }
    ctx->pc = 0x2D7554u;
    // 0x2d7554: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x2d7554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x2d7558: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x2d7558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2d755c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2d755cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d7560: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2d7560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d7564: 0xb3a2004b  sdl         $v0, 0x4B($sp)
    ctx->pc = 0x2d7564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d7568: 0xb7a20044  sdr         $v0, 0x44($sp)
    ctx->pc = 0x2d7568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d756c: 0xc0fb6f0  jal         func_3EDBC0
    ctx->pc = 0x2D756Cu;
    SET_GPR_U32(ctx, 31, 0x2D7574u);
    ctx->pc = 0x2D7570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D756Cu;
    // 0x2d7570: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDBC0u, 0x2D756Cu, 0x2D7574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7574u;
label_2d7574:
    // 0x2d7574: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2d7574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d7578: 0xb2102b  sltu        $v0, $a1, $s2
    ctx->pc = 0x2d7578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d757c: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2D757Cu;
    {
        const bool branch_taken_0x2d757c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d757c) {
            ctx->pc = 0x2D7580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D757Cu;
            // 0x2d7580: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D7538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7538;
        }
    }
    ctx->pc = 0x2D7584u;
label_2d7584:
    // 0x2d7584: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d7584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d7588:
    // 0x2d7588: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2d7588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d758c: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2d758cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d7590: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2d7590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d7594: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2d7594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d7598: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7598u;
        // 0x2d759c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D75A0u;
}
