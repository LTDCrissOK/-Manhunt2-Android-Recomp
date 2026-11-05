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

// Function: sub_0030D308
// Address: 0x30d308 - 0x30d398
void sub_0030D308_0x30d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D308_0x30d308");
#endif

    switch (ctx->pc) {
        case 0x30d308u: goto label_30d308;
        case 0x30d30cu: goto label_30d30c;
        case 0x30d310u: goto label_30d310;
        case 0x30d314u: goto label_30d314;
        case 0x30d318u: goto label_30d318;
        case 0x30d31cu: goto label_30d31c;
        case 0x30d320u: goto label_30d320;
        case 0x30d324u: goto label_30d324;
        case 0x30d328u: goto label_30d328;
        case 0x30d32cu: goto label_30d32c;
        case 0x30d330u: goto label_30d330;
        case 0x30d334u: goto label_30d334;
        case 0x30d338u: goto label_30d338;
        case 0x30d33cu: goto label_30d33c;
        case 0x30d340u: goto label_30d340;
        case 0x30d344u: goto label_30d344;
        case 0x30d348u: goto label_30d348;
        case 0x30d34cu: goto label_30d34c;
        case 0x30d350u: goto label_30d350;
        case 0x30d354u: goto label_30d354;
        case 0x30d358u: goto label_30d358;
        case 0x30d35cu: goto label_30d35c;
        case 0x30d360u: goto label_30d360;
        case 0x30d364u: goto label_30d364;
        case 0x30d368u: goto label_30d368;
        case 0x30d36cu: goto label_30d36c;
        case 0x30d370u: goto label_30d370;
        case 0x30d374u: goto label_30d374;
        case 0x30d378u: goto label_30d378;
        case 0x30d37cu: goto label_30d37c;
        case 0x30d380u: goto label_30d380;
        case 0x30d384u: goto label_30d384;
        case 0x30d388u: goto label_30d388;
        case 0x30d38cu: goto label_30d38c;
        case 0x30d390u: goto label_30d390;
        case 0x30d394u: goto label_30d394;
        default: break;
    }

    ctx->pc = 0x30d308u;

label_30d308:
    // 0x30d308: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_30d30c:
    // 0x30d30c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x30d30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_30d310:
    // 0x30d310: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x30d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_30d314:
    // 0x30d314: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30d314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30d318:
    // 0x30d318: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x30d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_30d31c:
    // 0x30d31c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30d31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_30d320:
    // 0x30d320: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x30d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_30d324:
    // 0x30d324: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x30d324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
label_30d328:
    // 0x30d328: 0x1000000c  b           . + 4 + (0xC << 2)
label_30d32c:
    if (ctx->pc == 0x30D32Cu) {
        ctx->pc = 0x30D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D328u;
        // 0x30d32c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D330u;
        goto label_30d330;
    }
    ctx->pc = 0x30D328u;
    {
        const bool branch_taken_0x30d328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D328u;
        // 0x30d32c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d328) {
            ctx->pc = 0x30D35Cu;
            goto label_30d35c;
        }
    }
    ctx->pc = 0x30D330u;
label_30d330:
    // 0x30d330: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x30d330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_30d334:
    // 0x30d334: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x30d334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_30d338:
    // 0x30d338: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x30d338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30d33c:
    // 0x30d33c: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x30d33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_30d340:
    // 0x30d340: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30d340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_30d344:
    // 0x30d344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30d344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_30d348:
    // 0x30d348: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x30d348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_30d34c:
    // 0x30d34c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x30d34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_30d350:
    // 0x30d350: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x30d350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_30d354:
    // 0x30d354: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x30d354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_30d358:
    // 0x30d358: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x30d358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_30d35c:
    // 0x30d35c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x30d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_30d360:
    // 0x30d360: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x30d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_30d364:
    // 0x30d364: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_30d368:
    if (ctx->pc == 0x30D368u) {
        ctx->pc = 0x30D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D364u;
        // 0x30d368: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D36Cu;
        goto label_30d36c;
    }
    ctx->pc = 0x30D364u;
    {
        const bool branch_taken_0x30d364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x30d364) {
            ctx->pc = 0x30D368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D364u;
            // 0x30d368: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D384u;
            goto label_30d384;
        }
    }
    ctx->pc = 0x30D36Cu;
label_30d36c:
    // 0x30d36c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x30d36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_30d370:
    // 0x30d370: 0x220f809  jalr        $s1
label_30d374:
    if (ctx->pc == 0x30D374u) {
        ctx->pc = 0x30D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D370u;
        // 0x30d374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D378u;
        goto label_30d378;
    }
    ctx->pc = 0x30D370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x30D378u);
        ctx->pc = 0x30D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D370u;
        // 0x30d374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D370u, 0x30D378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30D378u;
label_30d378:
    // 0x30d378: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_30d37c:
    if (ctx->pc == 0x30D37Cu) {
        ctx->pc = 0x30D380u;
        goto label_30d380;
    }
    ctx->pc = 0x30D378u;
    {
        const bool branch_taken_0x30d378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30d378) {
            ctx->pc = 0x30D330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d330;
        }
    }
    ctx->pc = 0x30D380u;
label_30d380:
    // 0x30d380: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x30d380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_30d384:
    // 0x30d384: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x30d384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_30d388:
    // 0x30d388: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x30d388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_30d38c:
    // 0x30d38c: 0x3e00008  jr          $ra
label_30d390:
    if (ctx->pc == 0x30D390u) {
        ctx->pc = 0x30D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D38Cu;
        // 0x30d390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30D394u;
        goto label_30d394;
    }
    ctx->pc = 0x30D38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D38Cu;
        // 0x30d390: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D394u;
label_30d394:
    // 0x30d394: 0x0  nop
    ctx->pc = 0x30d394u;
    // NOP
    ctx->pc = 0x30d398u;
}
