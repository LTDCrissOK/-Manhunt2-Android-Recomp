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

// Function: sub_0021C278
// Address: 0x21c278 - 0x21c4f8
void sub_0021C278_0x21c278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C278_0x21c278");
#endif

    switch (ctx->pc) {
        case 0x21c2c8u: goto label_21c2c8;
        case 0x21c2ecu: goto label_21c2ec;
        case 0x21c3a8u: goto label_21c3a8;
        case 0x21c3ccu: goto label_21c3cc;
        case 0x21c488u: goto label_21c488;
        case 0x21c4acu: goto label_21c4ac;
        default: break;
    }

    ctx->pc = 0x21c278u;

    // 0x21c278: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c27c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21c280: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x21c280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x21c284: 0x24423500  addiu       $v0, $v0, 0x3500
    ctx->pc = 0x21c284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x21c288: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x21c288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x21c28c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c290: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x21c294: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21c294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21c298: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21c298u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x21c29c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x21c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x21c2a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x21c2a4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x21c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x21c2a8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x21c2ac: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x21c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x21c2b0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x21c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x21c2b4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x21C2B4u;
    {
        const bool branch_taken_0x21c2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2B4u;
        // 0x21c2b8: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2b4) {
            ctx->pc = 0x21C324u;
            goto label_21c324;
        }
    }
    ctx->pc = 0x21C2BCu;
    // 0x21c2bc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x21c2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x21c2c0: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x21c2c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x21c2c4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c2c8:
    // 0x21c2c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c2cc: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x21c2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x21c2d0: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x21c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x21c2d4: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C2D4u;
    {
        const bool branch_taken_0x21c2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x21c2d4) {
            ctx->pc = 0x21C2E4u;
            goto label_21c2e4;
        }
    }
    ctx->pc = 0x21C2DCu;
    // 0x21c2dc: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C2DCu;
    {
        const bool branch_taken_0x21c2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x21C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2DCu;
        // 0x21c2e0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2dc) {
            ctx->pc = 0x21C2F0u;
            goto label_21c2f0;
        }
    }
    ctx->pc = 0x21C2E4u;
label_21c2e4:
    // 0x21c2e4: 0xc09ba88  jal         func_26EA20
    ctx->pc = 0x21C2E4u;
    SET_GPR_U32(ctx, 31, 0x21C2ECu);
    ctx->pc = 0x21C2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C2E4u;
    // 0x21c2e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EA20u, 0x21C2E4u, 0x21C2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C2ECu;
label_21c2ec:
    // 0x21c2ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c2f0:
    // 0x21c2f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C2F0u;
    {
        const bool branch_taken_0x21c2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c2f0) {
            ctx->pc = 0x21C2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C2F0u;
            // 0x21c2f4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C304u;
            goto label_21c304;
        }
    }
    ctx->pc = 0x21C2F8u;
    // 0x21c2f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21c2fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C2FCu;
    {
        const bool branch_taken_0x21c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C2FCu;
        // 0x21c300: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c2fc) {
            ctx->pc = 0x21C314u;
            goto label_21c314;
        }
    }
    ctx->pc = 0x21C304u;
label_21c304:
    // 0x21c304: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C304u;
    {
        const bool branch_taken_0x21c304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C304u;
        // 0x21c308: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c304) {
            ctx->pc = 0x21C318u;
            goto label_21c318;
        }
    }
    ctx->pc = 0x21C30Cu;
    // 0x21c30c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x21c310: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21c310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_21c314:
    // 0x21c314: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c318:
    // 0x21c318: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x21c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21c31c: 0x1462ffea  bne         $v1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x21C31Cu;
    {
        const bool branch_taken_0x21c31c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C31Cu;
        // 0x21c320: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c31c) {
            ctx->pc = 0x21C2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c2c8;
        }
    }
    ctx->pc = 0x21C324u;
label_21c324:
    // 0x21c324: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x21c324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x21c328: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21c328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21c32c: 0x24423510  addiu       $v0, $v0, 0x3510
    ctx->pc = 0x21c32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
    // 0x21c330: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21c330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3514u));
    // 0x21c334: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x21c334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x21c338: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x21c338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x21c33c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21c33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x21c340: 0x6ba30027  ldl         $v1, 0x27($sp)
    ctx->pc = 0x21c340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21c344: 0x6fa30020  ldr         $v1, 0x20($sp)
    ctx->pc = 0x21c344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21c348: 0x6ba4002f  ldl         $a0, 0x2F($sp)
    ctx->pc = 0x21c348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x21c34c: 0x6fa40028  ldr         $a0, 0x28($sp)
    ctx->pc = 0x21c34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x21c350: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x21c350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c354: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x21c354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c358: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x21c358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c35c: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x21c35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c360: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x21c360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x21c364: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21c364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x21c368: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x21c368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x21c36c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21c36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x21c370: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x21c370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21c374: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x21c374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21c378: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x21c378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21c37c: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x21c37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21c380: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x21c380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c384: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x21c384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c388: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x21c388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c38c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x21c38cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c390: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c394: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x21c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21c398: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21C398u;
    {
        const bool branch_taken_0x21c398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C398u;
        // 0x21c39c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c398) {
            ctx->pc = 0x21C404u;
            goto label_21c404;
        }
    }
    ctx->pc = 0x21C3A0u;
    // 0x21c3a0: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x21c3a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x21c3a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c3a8:
    // 0x21c3a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c3ac: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x21c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x21c3b0: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x21c3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x21c3b4: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C3B4u;
    {
        const bool branch_taken_0x21c3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x21c3b4) {
            ctx->pc = 0x21C3C4u;
            goto label_21c3c4;
        }
    }
    ctx->pc = 0x21C3BCu;
    // 0x21c3bc: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C3BCu;
    {
        const bool branch_taken_0x21c3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x21C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3BCu;
        // 0x21c3c0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3bc) {
            ctx->pc = 0x21C3D0u;
            goto label_21c3d0;
        }
    }
    ctx->pc = 0x21C3C4u;
label_21c3c4:
    // 0x21c3c4: 0xc09ba88  jal         func_26EA20
    ctx->pc = 0x21C3C4u;
    SET_GPR_U32(ctx, 31, 0x21C3CCu);
    ctx->pc = 0x21C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C3C4u;
    // 0x21c3c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EA20u, 0x21C3C4u, 0x21C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C3CCu;
label_21c3cc:
    // 0x21c3cc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c3d0:
    // 0x21c3d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C3D0u;
    {
        const bool branch_taken_0x21c3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c3d0) {
            ctx->pc = 0x21C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C3D0u;
            // 0x21c3d4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C3E4u;
            goto label_21c3e4;
        }
    }
    ctx->pc = 0x21C3D8u;
    // 0x21c3d8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21c3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21c3dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C3DCu;
    {
        const bool branch_taken_0x21c3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3DCu;
        // 0x21c3e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3dc) {
            ctx->pc = 0x21C3F4u;
            goto label_21c3f4;
        }
    }
    ctx->pc = 0x21C3E4u;
label_21c3e4:
    // 0x21c3e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C3E4u;
    {
        const bool branch_taken_0x21c3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3E4u;
        // 0x21c3e8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3e4) {
            ctx->pc = 0x21C3F8u;
            goto label_21c3f8;
        }
    }
    ctx->pc = 0x21C3ECu;
    // 0x21c3ec: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x21c3f0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_21c3f4:
    // 0x21c3f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c3f8:
    // 0x21c3f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x21c3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21c3fc: 0x1462ffea  bne         $v1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x21C3FCu;
    {
        const bool branch_taken_0x21c3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C3FCu;
        // 0x21c400: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c3fc) {
            ctx->pc = 0x21C3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c3a8;
        }
    }
    ctx->pc = 0x21C404u;
label_21c404:
    // 0x21c404: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x21c404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x21c408: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21c408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21c40c: 0x24423530  addiu       $v0, $v0, 0x3530
    ctx->pc = 0x21c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13616));
    // 0x21c410: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21c410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3534u));
    // 0x21c414: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x21c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x21c418: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x21c418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x21c41c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x21c420: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x21c420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21c424: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x21c424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21c428: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x21c428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21c42c: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x21c42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21c430: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x21c430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c434: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x21c434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c438: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x21c438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c43c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x21c43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c440: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x21c440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x21c444: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x21c444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x21c448: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x21c448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x21c44c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x21c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x21c450: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x21c450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21c454: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x21c454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21c458: 0x6ba2002f  ldl         $v0, 0x2F($sp)
    ctx->pc = 0x21c458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x21c45c: 0x6fa20028  ldr         $v0, 0x28($sp)
    ctx->pc = 0x21c45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x21c460: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x21c460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c464: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x21c464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c468: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x21c468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c46c: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x21c46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21c470: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c474: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x21c474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21c478: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21C478u;
    {
        const bool branch_taken_0x21c478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21C47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C478u;
        // 0x21c47c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c478) {
            ctx->pc = 0x21C4E4u;
            goto label_21c4e4;
        }
    }
    ctx->pc = 0x21C480u;
    // 0x21c480: 0x36100001  ori         $s0, $s0, 0x1
    ctx->pc = 0x21c480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)1);
    // 0x21c484: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c488:
    // 0x21c488: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21c488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c48c: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x21c48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x21c490: 0x701024  and         $v0, $v1, $s0
    ctx->pc = 0x21c490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x21c494: 0x10500003  beq         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C494u;
    {
        const bool branch_taken_0x21c494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x21c494) {
            ctx->pc = 0x21C4A4u;
            goto label_21c4a4;
        }
    }
    ctx->pc = 0x21C49Cu;
    // 0x21c49c: 0x14700004  bne         $v1, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C49Cu;
    {
        const bool branch_taken_0x21c49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x21C4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C49Cu;
        // 0x21c4a0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c49c) {
            ctx->pc = 0x21C4B0u;
            goto label_21c4b0;
        }
    }
    ctx->pc = 0x21C4A4u;
label_21c4a4:
    // 0x21c4a4: 0xc09ba88  jal         func_26EA20
    ctx->pc = 0x21C4A4u;
    SET_GPR_U32(ctx, 31, 0x21C4ACu);
    ctx->pc = 0x21C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C4A4u;
    // 0x21c4a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EA20u, 0x21C4A4u, 0x21C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C4ACu;
label_21c4ac:
    // 0x21c4ac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c4b0:
    // 0x21c4b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C4B0u;
    {
        const bool branch_taken_0x21c4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c4b0) {
            ctx->pc = 0x21C4B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C4B0u;
            // 0x21c4b4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C4C4u;
            goto label_21c4c4;
        }
    }
    ctx->pc = 0x21C4B8u;
    // 0x21c4b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21c4bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21C4BCu;
    {
        const bool branch_taken_0x21c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4BCu;
        // 0x21c4c0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4bc) {
            ctx->pc = 0x21C4D4u;
            goto label_21c4d4;
        }
    }
    ctx->pc = 0x21C4C4u;
label_21c4c4:
    // 0x21c4c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C4C4u;
    {
        const bool branch_taken_0x21c4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4C4u;
        // 0x21c4c8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4c4) {
            ctx->pc = 0x21C4D8u;
            goto label_21c4d8;
        }
    }
    ctx->pc = 0x21C4CCu;
    // 0x21c4cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x21c4d0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21c4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_21c4d4:
    // 0x21c4d4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21c4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c4d8:
    // 0x21c4d8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x21c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21c4dc: 0x1462ffea  bne         $v1, $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x21C4DCu;
    {
        const bool branch_taken_0x21c4dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4DCu;
        // 0x21c4e0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c4dc) {
            ctx->pc = 0x21C488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c488;
        }
    }
    ctx->pc = 0x21C4E4u;
label_21c4e4:
    // 0x21c4e4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x21c4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c4e8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x21c4e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c4ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x21C4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C4F0u;
        // 0x21c4f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C4F8u;
}
