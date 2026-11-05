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

// Function: sub_003AC450
// Address: 0x3ac450 - 0x3ac578
void sub_003AC450_0x3ac450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC450_0x3ac450");
#endif

    switch (ctx->pc) {
        case 0x3ac450u: goto label_3ac450;
        case 0x3ac454u: goto label_3ac454;
        case 0x3ac458u: goto label_3ac458;
        case 0x3ac45cu: goto label_3ac45c;
        case 0x3ac460u: goto label_3ac460;
        case 0x3ac464u: goto label_3ac464;
        case 0x3ac468u: goto label_3ac468;
        case 0x3ac46cu: goto label_3ac46c;
        case 0x3ac470u: goto label_3ac470;
        case 0x3ac474u: goto label_3ac474;
        case 0x3ac478u: goto label_3ac478;
        case 0x3ac47cu: goto label_3ac47c;
        case 0x3ac480u: goto label_3ac480;
        case 0x3ac484u: goto label_3ac484;
        case 0x3ac488u: goto label_3ac488;
        case 0x3ac48cu: goto label_3ac48c;
        case 0x3ac490u: goto label_3ac490;
        case 0x3ac494u: goto label_3ac494;
        case 0x3ac498u: goto label_3ac498;
        case 0x3ac49cu: goto label_3ac49c;
        case 0x3ac4a0u: goto label_3ac4a0;
        case 0x3ac4a4u: goto label_3ac4a4;
        case 0x3ac4a8u: goto label_3ac4a8;
        case 0x3ac4acu: goto label_3ac4ac;
        case 0x3ac4b0u: goto label_3ac4b0;
        case 0x3ac4b4u: goto label_3ac4b4;
        case 0x3ac4b8u: goto label_3ac4b8;
        case 0x3ac4bcu: goto label_3ac4bc;
        case 0x3ac4c0u: goto label_3ac4c0;
        case 0x3ac4c4u: goto label_3ac4c4;
        case 0x3ac4c8u: goto label_3ac4c8;
        case 0x3ac4ccu: goto label_3ac4cc;
        case 0x3ac4d0u: goto label_3ac4d0;
        case 0x3ac4d4u: goto label_3ac4d4;
        case 0x3ac4d8u: goto label_3ac4d8;
        case 0x3ac4dcu: goto label_3ac4dc;
        case 0x3ac4e0u: goto label_3ac4e0;
        case 0x3ac4e4u: goto label_3ac4e4;
        case 0x3ac4e8u: goto label_3ac4e8;
        case 0x3ac4ecu: goto label_3ac4ec;
        case 0x3ac4f0u: goto label_3ac4f0;
        case 0x3ac4f4u: goto label_3ac4f4;
        case 0x3ac4f8u: goto label_3ac4f8;
        case 0x3ac4fcu: goto label_3ac4fc;
        case 0x3ac500u: goto label_3ac500;
        case 0x3ac504u: goto label_3ac504;
        case 0x3ac508u: goto label_3ac508;
        case 0x3ac50cu: goto label_3ac50c;
        case 0x3ac510u: goto label_3ac510;
        case 0x3ac514u: goto label_3ac514;
        case 0x3ac518u: goto label_3ac518;
        case 0x3ac51cu: goto label_3ac51c;
        case 0x3ac520u: goto label_3ac520;
        case 0x3ac524u: goto label_3ac524;
        case 0x3ac528u: goto label_3ac528;
        case 0x3ac52cu: goto label_3ac52c;
        case 0x3ac530u: goto label_3ac530;
        case 0x3ac534u: goto label_3ac534;
        case 0x3ac538u: goto label_3ac538;
        case 0x3ac53cu: goto label_3ac53c;
        case 0x3ac540u: goto label_3ac540;
        case 0x3ac544u: goto label_3ac544;
        case 0x3ac548u: goto label_3ac548;
        case 0x3ac54cu: goto label_3ac54c;
        case 0x3ac550u: goto label_3ac550;
        case 0x3ac554u: goto label_3ac554;
        case 0x3ac558u: goto label_3ac558;
        case 0x3ac55cu: goto label_3ac55c;
        case 0x3ac560u: goto label_3ac560;
        case 0x3ac564u: goto label_3ac564;
        case 0x3ac568u: goto label_3ac568;
        case 0x3ac56cu: goto label_3ac56c;
        case 0x3ac570u: goto label_3ac570;
        case 0x3ac574u: goto label_3ac574;
        default: break;
    }

    ctx->pc = 0x3ac450u;

label_3ac450:
    // 0x3ac450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ac450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ac454:
    // 0x3ac454: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3ac454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_3ac458:
    // 0x3ac458: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ac458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_3ac45c:
    // 0x3ac45c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ac45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac460:
    // 0x3ac460: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3ac460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_3ac464:
    // 0x3ac464: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ac464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac468:
    // 0x3ac468: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3ac468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_3ac46c:
    // 0x3ac46c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3ac46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_3ac470:
    // 0x3ac470: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3ac470u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ac474:
    // 0x3ac474: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3ac474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_3ac478:
    // 0x3ac478: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3ac478u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac47c:
    // 0x3ac47c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ac47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3ac480:
    // 0x3ac480: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3ac480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_3ac484:
    // 0x3ac484: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ac484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ac488:
    // 0x3ac488: 0xc0ea7d8  jal         func_3A9F60
label_3ac48c:
    if (ctx->pc == 0x3AC48Cu) {
        ctx->pc = 0x3AC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC488u;
        // 0x3ac48c: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC490u;
        goto label_3ac490;
    }
    ctx->pc = 0x3AC488u;
    SET_GPR_U32(ctx, 31, 0x3AC490u);
    ctx->pc = 0x3AC48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC488u;
    // 0x3ac48c: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AC488u, 0x3AC490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC490u;
label_3ac490:
    // 0x3ac490: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ac490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ac494:
    // 0x3ac494: 0x245127a8  addiu       $s1, $v0, 0x27A8
    ctx->pc = 0x3ac494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
label_3ac498:
    // 0x3ac498: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3ac498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3ac49c:
    // 0x3ac49c: 0x5457001f  bnel        $v0, $s7, . + 4 + (0x1F << 2)
label_3ac4a0:
    if (ctx->pc == 0x3AC4A0u) {
        ctx->pc = 0x3AC4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC49Cu;
        // 0x3ac4a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC4A4u;
        goto label_3ac4a4;
    }
    ctx->pc = 0x3AC49Cu;
    {
        const bool branch_taken_0x3ac49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3ac49c) {
            ctx->pc = 0x3AC4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC49Cu;
            // 0x3ac4a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC51Cu;
            goto label_3ac51c;
        }
    }
    ctx->pc = 0x3AC4A4u;
label_3ac4a4:
    // 0x3ac4a4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x3ac4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_3ac4a8:
    // 0x3ac4a8: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x3ac4a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3ac4ac:
    // 0x3ac4ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_3ac4b0:
    if (ctx->pc == 0x3AC4B0u) {
        ctx->pc = 0x3AC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4ACu;
        // 0x3ac4b0: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC4B4u;
        goto label_3ac4b4;
    }
    ctx->pc = 0x3AC4ACu;
    {
        const bool branch_taken_0x3ac4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4ACu;
        // 0x3ac4b0: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4ac) {
            ctx->pc = 0x3AC4E8u;
            goto label_3ac4e8;
        }
    }
    ctx->pc = 0x3AC4B4u;
label_3ac4b4:
    // 0x3ac4b4: 0x0  nop
    ctx->pc = 0x3ac4b4u;
    // NOP
label_3ac4b8:
    // 0x3ac4b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3ac4b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3ac4bc:
    // 0x3ac4bc: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x3ac4bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_3ac4c0:
    // 0x3ac4c0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3ac4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3ac4c4:
    // 0x3ac4c4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3ac4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_3ac4c8:
    // 0x3ac4c8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3ac4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3ac4cc:
    // 0x3ac4cc: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x3ac4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3ac4d0:
    // 0x3ac4d0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x3ac4d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3ac4d4:
    // 0x3ac4d4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x3ac4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3ac4d8:
    // 0x3ac4d8: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x3ac4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ac4dc:
    // 0x3ac4dc: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x3ac4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ac4e0:
    // 0x3ac4e0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x3ac4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_3ac4e4:
    // 0x3ac4e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3ac4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3ac4e8:
    // 0x3ac4e8: 0x1254000f  beq         $s2, $s4, . + 4 + (0xF << 2)
label_3ac4ec:
    if (ctx->pc == 0x3AC4ECu) {
        ctx->pc = 0x3AC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4E8u;
        // 0x3ac4ec: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC4F0u;
        goto label_3ac4f0;
    }
    ctx->pc = 0x3AC4E8u;
    {
        const bool branch_taken_0x3ac4e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x3AC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC4E8u;
        // 0x3ac4ec: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac4e8) {
            ctx->pc = 0x3AC528u;
            goto label_3ac528;
        }
    }
    ctx->pc = 0x3AC4F0u;
label_3ac4f0:
    // 0x3ac4f0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3ac4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ac4f4:
    // 0x3ac4f4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x3ac4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3ac4f8:
    // 0x3ac4f8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3ac4f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_3ac4fc:
    // 0x3ac4fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ac4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ac500:
    // 0x3ac500: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3ac500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3ac504:
    // 0x3ac504: 0x40f809  jalr        $v0
label_3ac508:
    if (ctx->pc == 0x3AC508u) {
        ctx->pc = 0x3AC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC504u;
        // 0x3ac508: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC50Cu;
        goto label_3ac50c;
    }
    ctx->pc = 0x3AC504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC50Cu);
        ctx->pc = 0x3AC508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC504u;
        // 0x3ac508: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC504u, 0x3AC50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC50Cu;
label_3ac50c:
    // 0x3ac50c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3ac50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3ac510:
    // 0x3ac510: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
label_3ac514:
    if (ctx->pc == 0x3AC514u) {
        ctx->pc = 0x3AC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC510u;
        // 0x3ac514: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC518u;
        goto label_3ac518;
    }
    ctx->pc = 0x3AC510u;
    {
        const bool branch_taken_0x3ac510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ac510) {
            ctx->pc = 0x3AC514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC510u;
            // 0x3ac514: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac4b8;
        }
    }
    ctx->pc = 0x3AC518u;
label_3ac518:
    // 0x3ac518: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ac518u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ac51c:
    // 0x3ac51c: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x3ac51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
label_3ac520:
    // 0x3ac520: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_3ac524:
    if (ctx->pc == 0x3AC524u) {
        ctx->pc = 0x3AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC520u;
        // 0x3ac524: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC528u;
        goto label_3ac528;
    }
    ctx->pc = 0x3AC520u;
    {
        const bool branch_taken_0x3ac520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC520u;
        // 0x3ac524: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac520) {
            ctx->pc = 0x3AC498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac498;
        }
    }
    ctx->pc = 0x3AC528u;
label_3ac528:
    // 0x3ac528: 0xc0ea7de  jal         func_3A9F78
label_3ac52c:
    if (ctx->pc == 0x3AC52Cu) {
        ctx->pc = 0x3AC530u;
        goto label_3ac530;
    }
    ctx->pc = 0x3AC528u;
    SET_GPR_U32(ctx, 31, 0x3AC530u);
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AC528u, 0x3AC530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC530u;
label_3ac530:
    // 0x3ac530: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x3ac530u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_3ac534:
    // 0x3ac534: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ac534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac538:
    // 0x3ac538: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ac538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ac53c:
    // 0x3ac53c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ac53cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ac540:
    // 0x3ac540: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3ac540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3ac544:
    // 0x3ac544: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3ac544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3ac548:
    // 0x3ac548: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3ac548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3ac54c:
    // 0x3ac54c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3ac54cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3ac550:
    // 0x3ac550: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3ac550u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3ac554:
    // 0x3ac554: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ac554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ac558:
    // 0x3ac558: 0x3e00008  jr          $ra
label_3ac55c:
    if (ctx->pc == 0x3AC55Cu) {
        ctx->pc = 0x3AC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC558u;
        // 0x3ac55c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC560u;
        goto label_3ac560;
    }
    ctx->pc = 0x3AC558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC558u;
        // 0x3ac55c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC560u;
label_3ac560:
    // 0x3ac560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ac564:
    // 0x3ac564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ac568:
    // 0x3ac568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac56c:
    // 0x3ac56c: 0x80e8fcc  j           func_3A3F30
label_3ac570:
    if (ctx->pc == 0x3AC570u) {
        ctx->pc = 0x3AC570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC56Cu;
        // 0x3ac570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC574u;
        goto label_3ac574;
    }
    ctx->pc = 0x3AC56Cu;
    ctx->pc = 0x3AC570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC56Cu;
    // 0x3ac570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3F30u;
    sub_003A3F30_0x3a3f30(rdram, ctx, runtime); return;
    ctx->pc = 0x3AC574u;
label_3ac574:
    // 0x3ac574: 0x0  nop
    ctx->pc = 0x3ac574u;
    // NOP
    ctx->pc = 0x3ac578u;
}
