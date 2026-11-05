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

// Function: sub_002D7FC0
// Address: 0x2d7fc0 - 0x2d8150
void sub_002D7FC0_0x2d7fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7FC0_0x2d7fc0");
#endif

    switch (ctx->pc) {
        case 0x2d8078u: goto label_2d8078;
        case 0x2d8088u: goto label_2d8088;
        case 0x2d80a4u: goto label_2d80a4;
        case 0x2d8108u: goto label_2d8108;
        case 0x2d8110u: goto label_2d8110;
        default: break;
    }

    ctx->pc = 0x2d7fc0u;

    // 0x2d7fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d7fc4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d7fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d7fc8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d7fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d7fcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d7fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7fd0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d7fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d7fd4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d7fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d7fd8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2d7fd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2d7fdc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x2d7fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d7fe0: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2D7FE0u;
    {
        const bool branch_taken_0x2d7fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FE0u;
        // 0x2d7fe4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fe0) {
            ctx->pc = 0x2D8134u;
            goto label_2d8134;
        }
    }
    ctx->pc = 0x2D7FE8u;
    // 0x2d7fe8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d7fec: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2D7FECu;
    {
        const bool branch_taken_0x2d7fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FECu;
        // 0x2d7ff0: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7fec) {
            ctx->pc = 0x2D8130u;
            goto label_2d8130;
        }
    }
    ctx->pc = 0x2D7FF4u;
    // 0x2d7ff4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d7ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d7ff8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2d7ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2d7ffc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d7ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d8000: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2d8000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8004: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d8004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d8008: 0x8c64bcf0  lw          $a0, -0x4310($v1)
    ctx->pc = 0x2d8008u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBCF0u));
    // 0x2d800c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2d800cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2d8010: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x2d8010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x2d8014: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d8014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d8018: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d8018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2d801c: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2d801cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x2d8020: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d8020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d8024: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2d8024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2d8028: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2d8028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x2d802c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2d802cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2d8030: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2d8030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2d8034: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2d8034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d8038: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2d8038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d803c: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x2d803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d8040: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x2d8040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d8044: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2d8044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8048: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2d8048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d804c: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2d804cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8050: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2d8050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d8054: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2d8054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d8058: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2d8058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2d805c: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2d805cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2d8060: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d8060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d8064: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d8064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d8068: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2D8068u;
    {
        const bool branch_taken_0x2d8068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8068u;
        // 0x2d806c: 0x8e44bcf0  lw          $a0, -0x4310($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8068) {
            ctx->pc = 0x2D80E0u;
            goto label_2d80e0;
        }
    }
    ctx->pc = 0x2D8070u;
    // 0x2d8070: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2d8070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d8074: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d8074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d8078:
    // 0x2d8078: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d8078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d807c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d8080: 0xc0b6096  jal         func_2D8258
    ctx->pc = 0x2D8080u;
    SET_GPR_U32(ctx, 31, 0x2D8088u);
    ctx->pc = 0x2D8084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8080u;
    // 0x2d8084: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8258u, 0x2D8080u, 0x2D8088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8088u;
label_2d8088:
    // 0x2d8088: 0xc62c001c  lwc1        $f12, 0x1C($s1)
    ctx->pc = 0x2d8088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d808c: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x2d808cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d8090: 0x0  nop
    ctx->pc = 0x2d8090u;
    // NOP
    // 0x2d8094: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8094u;
    {
        const bool branch_taken_0x2d8094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D8098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8094u;
        // 0x2d8098: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8094) {
            ctx->pc = 0x2D80A8u;
            goto label_2d80a8;
        }
    }
    ctx->pc = 0x2D809Cu;
    // 0x2d809c: 0xc0b6054  jal         func_2D8150
    ctx->pc = 0x2D809Cu;
    SET_GPR_U32(ctx, 31, 0x2D80A4u);
    ctx->pc = 0x2D80A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D809Cu;
    // 0x2d80a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8150u, 0x2D809Cu, 0x2D80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D80A4u;
label_2d80a4:
    // 0x2d80a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d80a8:
    // 0x2d80a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D80A8u;
    {
        const bool branch_taken_0x2d80a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d80a8) {
            ctx->pc = 0x2D80ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D80A8u;
            // 0x2d80ac: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D80BCu;
            goto label_2d80bc;
        }
    }
    ctx->pc = 0x2D80B0u;
    // 0x2d80b0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d80b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D80B4u;
    {
        const bool branch_taken_0x2d80b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D80B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80B4u;
        // 0x2d80b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80b4) {
            ctx->pc = 0x2D80CCu;
            goto label_2d80cc;
        }
    }
    ctx->pc = 0x2D80BCu;
label_2d80bc:
    // 0x2d80bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D80BCu;
    {
        const bool branch_taken_0x2d80bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80BCu;
        // 0x2d80c0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80bc) {
            ctx->pc = 0x2D80D0u;
            goto label_2d80d0;
        }
    }
    ctx->pc = 0x2D80C4u;
    // 0x2d80c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d80c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d80c8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d80c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2d80cc:
    // 0x2d80cc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d80d0:
    // 0x2d80d0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d80d4: 0x1462ffe8  bne         $v1, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2D80D4u;
    {
        const bool branch_taken_0x2d80d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80D4u;
        // 0x2d80d8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80d4) {
            ctx->pc = 0x2D8078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8078;
        }
    }
    ctx->pc = 0x2D80DCu;
    // 0x2d80dc: 0x8e44bcf0  lw          $a0, -0x4310($s2)
    ctx->pc = 0x2d80dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950128)));
label_2d80e0:
    // 0x2d80e0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2d80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2d80e4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x2d80e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x2d80e8: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2d80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2d80ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2d80ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2d80f0: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x2d80f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x2d80f4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2d80f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d80f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d80fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D80FCu;
    {
        const bool branch_taken_0x2d80fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D8100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D80FCu;
        // 0x2d8100: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d80fc) {
            ctx->pc = 0x2D8120u;
            goto label_2d8120;
        }
    }
    ctx->pc = 0x2D8104u;
    // 0x2d8104: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2d8104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d8108:
    // 0x2d8108: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x2D8108u;
    SET_GPR_U32(ctx, 31, 0x2D8110u);
    ctx->pc = 0x2D810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8108u;
    // 0x2d810c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x2D8108u, 0x2D8110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D8110u;
label_2d8110:
    // 0x2d8110: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d8114: 0x0  nop
    ctx->pc = 0x2d8114u;
    // NOP
    // 0x2d8118: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D8118u;
    {
        const bool branch_taken_0x2d8118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d8118) {
            ctx->pc = 0x2D811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D8118u;
            // 0x2d811c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d8108;
        }
    }
    ctx->pc = 0x2D8120u;
label_2d8120:
    // 0x2d8120: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2d8120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2d8124: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d8124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d8128: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2d8128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2d812c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2d812cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2d8130:
    // 0x2d8130: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d8130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d8134:
    // 0x2d8134: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d8134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d8138: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d8138u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d813c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d813cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d8140: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2d8140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d8144: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8144u;
        // 0x2d8148: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D814Cu;
    // 0x2d814c: 0x0  nop
    ctx->pc = 0x2d814cu;
    // NOP
    ctx->pc = 0x2d8150u;
}
