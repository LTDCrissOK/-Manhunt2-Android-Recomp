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

// Function: sub_003842D8
// Address: 0x3842d8 - 0x384440
void sub_003842D8_0x3842d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003842D8_0x3842d8");
#endif

    switch (ctx->pc) {
        case 0x384360u: goto label_384360;
        case 0x384378u: goto label_384378;
        case 0x3843dcu: goto label_3843dc;
        case 0x3843fcu: goto label_3843fc;
        case 0x384410u: goto label_384410;
        case 0x384418u: goto label_384418;
        default: break;
    }

    ctx->pc = 0x3842d8u;

    // 0x3842d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3842d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3842dc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3842dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3842e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3842e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3842e4: 0x2473dfe4  addiu       $s3, $v1, -0x201C
    ctx->pc = 0x3842e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x3842e8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3842e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x3842ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3842ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3842f0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3842f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3842f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3842f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3842f8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3842f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3842fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3842fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384300: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x384300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x384304: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x384304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384308: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x38430c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384310: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x384310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x384314: 0x10670041  beq         $v1, $a3, . + 4 + (0x41 << 2)
    ctx->pc = 0x384314u;
    {
        const bool branch_taken_0x384314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x384318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384314u;
        // 0x384318: 0x3442000a  ori         $v0, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384314) {
            ctx->pc = 0x38441Cu;
            goto label_38441c;
        }
    }
    ctx->pc = 0x38431Cu;
    // 0x38431c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x38431Cu;
    {
        const bool branch_taken_0x38431c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x384320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38431Cu;
        // 0x384320: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38431c) {
            ctx->pc = 0x384330u;
            goto label_384330;
        }
    }
    ctx->pc = 0x384324u;
    // 0x384324: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x384324u;
    {
        const bool branch_taken_0x384324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384324u;
        // 0x384328: 0x24848af8  addiu       $a0, $a0, -0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384324) {
            ctx->pc = 0x384358u;
            goto label_384358;
        }
    }
    ctx->pc = 0x38432Cu;
    // 0x38432c: 0x0  nop
    ctx->pc = 0x38432cu;
    // NOP
label_384330:
    // 0x384330: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x384330u;
    {
        const bool branch_taken_0x384330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x384330) {
            ctx->pc = 0x384334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x384330u;
            // 0x384334: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384348u;
            goto label_384348;
        }
    }
    ctx->pc = 0x384338u;
    // 0x384338: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x38433c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38433Cu;
    {
        const bool branch_taken_0x38433c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38433Cu;
        // 0x384340: 0x24848b20  addiu       $a0, $a0, -0x74E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38433c) {
            ctx->pc = 0x384358u;
            goto label_384358;
        }
    }
    ctx->pc = 0x384344u;
    // 0x384344: 0x0  nop
    ctx->pc = 0x384344u;
    // NOP
label_384348:
    // 0x384348: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x384348u;
    {
        const bool branch_taken_0x384348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x384348) {
            ctx->pc = 0x384370u;
            goto label_384370;
        }
    }
    ctx->pc = 0x384350u;
    // 0x384350: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x384354: 0x24848b50  addiu       $a0, $a0, -0x74B0
    ctx->pc = 0x384354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937424));
label_384358:
    // 0x384358: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384358u;
    SET_GPR_U32(ctx, 31, 0x384360u);
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384358u, 0x384360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384360u;
label_384360:
    // 0x384360: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384364: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x384364u;
    {
        const bool branch_taken_0x384364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384364u;
        // 0x384368: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x384364) {
            ctx->pc = 0x38441Cu;
            goto label_38441c;
        }
    }
    ctx->pc = 0x38436Cu;
    // 0x38436c: 0x0  nop
    ctx->pc = 0x38436cu;
    // NOP
label_384370:
    // 0x384370: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384370u;
    SET_GPR_U32(ctx, 31, 0x384378u);
    ctx->pc = 0x384374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384370u;
    // 0x384374: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384370u, 0x384378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384378u;
label_384378:
    // 0x384378: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x38437c: 0x2471dfdc  addiu       $s1, $v1, -0x2024
    ctx->pc = 0x38437cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384380: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x384380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384384: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x384384u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384388: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x38438c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x38438cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x384390: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384394: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x384394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x384398: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x384398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x38439c: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x38439cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3843a0: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x3843a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3843a4: 0x8a07000b  lwl         $a3, 0xB($s0)
    ctx->pc = 0x3843a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x3843a8: 0x9a070008  lwr         $a3, 0x8($s0)
    ctx->pc = 0x3843a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x3843ac: 0x8609000c  lh          $t1, 0xC($s0)
    ctx->pc = 0x3843acu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3843b0: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x3843b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3843b4: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x3843b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3843b8: 0xa847002b  swl         $a3, 0x2B($v0)
    ctx->pc = 0x3843b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 43); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3843bc: 0xb8470028  swr         $a3, 0x28($v0)
    ctx->pc = 0x3843bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3843c0: 0xa449002c  sh          $t1, 0x2C($v0)
    ctx->pc = 0x3843c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 9));
    // 0x3843c4: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x3843c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3843c8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3843c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3843cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3843ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3843d0: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x3843d0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x3843d4: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3843D4u;
    SET_GPR_U32(ctx, 31, 0x3843DCu);
    ctx->pc = 0x3843D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843D4u;
    // 0x3843d8: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3843D4u, 0x3843DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843DCu;
label_3843dc:
    // 0x3843dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3843DCu;
    {
        const bool branch_taken_0x3843dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3843dc) {
            ctx->pc = 0x3843E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3843DCu;
            // 0x3843e0: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384408u;
            goto label_384408;
        }
    }
    ctx->pc = 0x3843E4u;
    // 0x3843e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3843e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3843e8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3843e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3843ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3843ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3843f0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3843f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x3843f4: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3843F4u;
    SET_GPR_U32(ctx, 31, 0x3843FCu);
    ctx->pc = 0x3843F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3843F4u;
    // 0x3843f8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3843F4u, 0x3843FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3843FCu;
label_3843fc:
    // 0x3843fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3843FCu;
    {
        const bool branch_taken_0x3843fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3843FCu;
        // 0x384400: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3843fc) {
            ctx->pc = 0x38441Cu;
            goto label_38441c;
        }
    }
    ctx->pc = 0x384404u;
    // 0x384404: 0x0  nop
    ctx->pc = 0x384404u;
    // NOP
label_384408:
    // 0x384408: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384408u;
    SET_GPR_U32(ctx, 31, 0x384410u);
    ctx->pc = 0x38440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384408u;
    // 0x38440c: 0x24848b80  addiu       $a0, $a0, -0x7480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384408u, 0x384410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384410u;
label_384410:
    // 0x384410: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384410u;
    SET_GPR_U32(ctx, 31, 0x384418u);
    ctx->pc = 0x384414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384410u;
    // 0x384414: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384410u, 0x384418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384418u;
label_384418:
    // 0x384418: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_38441c:
    // 0x38441c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38441cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384420: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384424: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384428: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x384428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x38442c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x38442cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x384430: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x384430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x384434: 0x3e00008  jr          $ra
    ctx->pc = 0x384434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384434u;
        // 0x384438: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38443Cu;
    // 0x38443c: 0x0  nop
    ctx->pc = 0x38443cu;
    // NOP
    ctx->pc = 0x384440u;
}
