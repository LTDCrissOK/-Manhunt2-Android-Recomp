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

// Function: sub_002AA4A8
// Address: 0x2aa4a8 - 0x2aa728
void sub_002AA4A8_0x2aa4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA4A8_0x2aa4a8");
#endif

    switch (ctx->pc) {
        case 0x2aa508u: goto label_2aa508;
        case 0x2aa514u: goto label_2aa514;
        case 0x2aa53cu: goto label_2aa53c;
        case 0x2aa548u: goto label_2aa548;
        case 0x2aa550u: goto label_2aa550;
        case 0x2aa56cu: goto label_2aa56c;
        case 0x2aa5e4u: goto label_2aa5e4;
        case 0x2aa5f0u: goto label_2aa5f0;
        case 0x2aa668u: goto label_2aa668;
        case 0x2aa674u: goto label_2aa674;
        case 0x2aa6e8u: goto label_2aa6e8;
        case 0x2aa6f0u: goto label_2aa6f0;
        default: break;
    }

    ctx->pc = 0x2aa4a8u;

    // 0x2aa4a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2aa4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2aa4ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2aa4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2aa4b0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2aa4b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2aa4b4: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x2aa4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x2aa4b8: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x2aa4b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x2aa4bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa4bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa4c0: 0xc454ac6c  lwc1        $f20, -0x5394($v0)
    ctx->pc = 0x2aa4c0u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aa4c4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2aa4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2aa4c8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2aa4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2aa4cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4d0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2aa4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2aa4d4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2aa4d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4d8: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2aa4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2aa4dc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2aa4dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2aa4e0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2aa4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2aa4e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2aa4e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4e8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2aa4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2aa4ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2aa4ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa4f0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2aa4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2aa4f4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2aa4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2aa4f8: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2aa4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2aa4fc: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2aa4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2aa500: 0xc0db198  jal         func_36C660
    ctx->pc = 0x2AA500u;
    SET_GPR_U32(ctx, 31, 0x2AA508u);
    ctx->pc = 0x2AA504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA500u;
    // 0x2aa504: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x2AA500u, 0x2AA508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA508u;
label_2aa508:
    // 0x2aa508: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2aa508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aa50c: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x2AA50Cu;
    SET_GPR_U32(ctx, 31, 0x2AA514u);
    ctx->pc = 0x2AA510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA50Cu;
    // 0x2aa510: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x2AA50Cu, 0x2AA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA514u;
label_2aa514:
    // 0x2aa514: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2aa514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aa518: 0x93b60000  lbu         $s6, 0x0($sp)
    ctx->pc = 0x2aa518u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa51c: 0x93b70001  lbu         $s7, 0x1($sp)
    ctx->pc = 0x2aa51cu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2aa520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa524: 0x93b50002  lbu         $s5, 0x2($sp)
    ctx->pc = 0x2aa524u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2aa528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aa528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa52c: 0x93b40003  lbu         $s4, 0x3($sp)
    ctx->pc = 0x2aa52cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2aa530: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2aa530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2aa534: 0xc0aa55e  jal         func_2A9578
    ctx->pc = 0x2AA534u;
    SET_GPR_U32(ctx, 31, 0x2AA53Cu);
    ctx->pc = 0x2AA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA534u;
    // 0x2aa538: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9578u, 0x2AA534u, 0x2AA53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA53Cu;
label_2aa53c:
    // 0x2aa53c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aa53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa540: 0xc0aa570  jal         func_2A95C0
    ctx->pc = 0x2AA540u;
    SET_GPR_U32(ctx, 31, 0x2AA548u);
    ctx->pc = 0x2AA544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA540u;
    // 0x2aa544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A95C0u, 0x2AA540u, 0x2AA548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA548u;
label_2aa548:
    // 0x2aa548: 0xc0aadb2  jal         func_2AB6C8
    ctx->pc = 0x2AA548u;
    SET_GPR_U32(ctx, 31, 0x2AA550u);
    ctx->pc = 0x2AA54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA548u;
    // 0x2aa54c: 0x8e240054  lw          $a0, 0x54($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6C8u, 0x2AA548u, 0x2AA550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA550u;
label_2aa550:
    // 0x2aa550: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2aa550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2aa554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa558: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2aa558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2aa55c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2aa55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2aa560: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2aa560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa564: 0xc0aada4  jal         func_2AB690
    ctx->pc = 0x2AA564u;
    SET_GPR_U32(ctx, 31, 0x2AA56Cu);
    ctx->pc = 0x2AA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA564u;
    // 0x2aa568: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB690u, 0x2AA564u, 0x2AA56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA56Cu;
label_2aa56c:
    // 0x2aa56c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2aa56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aa570: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2aa570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aa574: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2aa574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2aa578: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2aa578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2aa57c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2aa57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa580: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2aa580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa584: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x2aa584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa588: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x2aa588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa58c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2aa58cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa590: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2aa590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa594: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2aa594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa598: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2aa598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa59c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2aa59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa5a0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2aa5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa5a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2aa5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5a8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2aa5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa5ac: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2aa5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa5b0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2aa5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa5b4: 0x46012300  add.s       $f12, $f4, $f1
    ctx->pc = 0x2aa5b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2aa5b8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2aa5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa5bc: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x2aa5bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2aa5c0: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2aa5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aa5c4: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2aa5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa5c8: 0xc7af0034  lwc1        $f15, 0x34($sp)
    ctx->pc = 0x2aa5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2aa5cc: 0x460d1b40  add.s       $f13, $f3, $f13
    ctx->pc = 0x2aa5ccu;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2aa5d0: 0x46142382  mul.s       $f14, $f4, $f20
    ctx->pc = 0x2aa5d0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2aa5d4: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x2aa5d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x2aa5d8: 0x460f03c2  mul.s       $f15, $f0, $f15
    ctx->pc = 0x2aa5d8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2aa5dc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2AA5DCu;
    SET_GPR_U32(ctx, 31, 0x2AA5E4u);
    ctx->pc = 0x2AA5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5DCu;
    // 0x2aa5e0: 0x460e6301  sub.s       $f12, $f12, $f14 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2AA5DCu, 0x2AA5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5E4u;
label_2aa5e4:
    // 0x2aa5e4: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2aa5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2aa5e8: 0xc0aada8  jal         func_2AB6A0
    ctx->pc = 0x2AA5E8u;
    SET_GPR_U32(ctx, 31, 0x2AA5F0u);
    ctx->pc = 0x2AA5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA5E8u;
    // 0x2aa5ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6A0u, 0x2AA5E8u, 0x2AA5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA5F0u;
label_2aa5f0:
    // 0x2aa5f0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2aa5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aa5f4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2aa5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aa5f8: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2aa5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2aa5fc: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2aa5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2aa600: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2aa600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa604: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2aa604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa608: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x2aa608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa60c: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x2aa60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa610: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2aa610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa614: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2aa614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa618: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x2aa618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa61c: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x2aa61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa620: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2aa620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa624: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2aa624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa628: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2aa628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa62c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2aa62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa630: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2aa630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa634: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2aa634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa638: 0x46012300  add.s       $f12, $f4, $f1
    ctx->pc = 0x2aa638u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2aa63c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x2aa63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2aa640: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x2aa640u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2aa644: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2aa644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aa648: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2aa648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa64c: 0xc7af0034  lwc1        $f15, 0x34($sp)
    ctx->pc = 0x2aa64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2aa650: 0x460d1b40  add.s       $f13, $f3, $f13
    ctx->pc = 0x2aa650u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x2aa654: 0x46142382  mul.s       $f14, $f4, $f20
    ctx->pc = 0x2aa654u;
    ctx->f[14] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2aa658: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x2aa658u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x2aa65c: 0x460f03c2  mul.s       $f15, $f0, $f15
    ctx->pc = 0x2aa65cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[0], ctx->f[15]);
    // 0x2aa660: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2AA660u;
    SET_GPR_U32(ctx, 31, 0x2AA668u);
    ctx->pc = 0x2AA664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA660u;
    // 0x2aa664: 0x460e6301  sub.s       $f12, $f12, $f14 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2AA660u, 0x2AA668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA668u;
label_2aa668:
    // 0x2aa668: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x2aa668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x2aa66c: 0xc0aadac  jal         func_2AB6B0
    ctx->pc = 0x2AA66Cu;
    SET_GPR_U32(ctx, 31, 0x2AA674u);
    ctx->pc = 0x2AA670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA66Cu;
    // 0x2aa670: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB6B0u, 0x2AA66Cu, 0x2AA674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA674u;
label_2aa674:
    // 0x2aa674: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2aa674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2aa678: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2aa678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2aa67c: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2aa67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2aa680: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2aa680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2aa684: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x2aa684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa688: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x2aa688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa68c: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x2aa68cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa690: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x2aa690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2aa694: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2aa694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa698: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2aa698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2aa69c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2aa69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2aa6a0: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2aa6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2aa6a4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2aa6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2aa6a8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2aa6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa6ac: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x2aa6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2aa6b0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x2aa6b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2aa6b4: 0xc6210090  lwc1        $f1, 0x90($s1)
    ctx->pc = 0x2aa6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa6b8: 0x46142502  mul.s       $f20, $f4, $f20
    ctx->pc = 0x2aa6b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2aa6bc: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x2aa6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2aa6c0: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2aa6c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2aa6c4: 0x44071800  mfc1        $a3, $f3
    ctx->pc = 0x2aa6c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2aa6c8: 0x8e280058  lw          $t0, 0x58($s1)
    ctx->pc = 0x2aa6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x2aa6cc: 0x46046300  add.s       $f12, $f12, $f4
    ctx->pc = 0x2aa6ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[4]);
    // 0x2aa6d0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2aa6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aa6d4: 0xc7af002c  lwc1        $f15, 0x2C($sp)
    ctx->pc = 0x2aa6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2aa6d8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x2aa6d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x2aa6dc: 0x460d0b40  add.s       $f13, $f1, $f13
    ctx->pc = 0x2aa6dcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x2aa6e0: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2AA6E0u;
    SET_GPR_U32(ctx, 31, 0x2AA6E8u);
    ctx->pc = 0x2AA6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA6E0u;
    // 0x2aa6e4: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2AA6E0u, 0x2AA6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6E8u;
label_2aa6e8:
    // 0x2aa6e8: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x2AA6E8u;
    SET_GPR_U32(ctx, 31, 0x2AA6F0u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x2AA6E8u, 0x2AA6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AA6F0u;
label_2aa6f0:
    // 0x2aa6f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2aa6f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa6f4: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2aa6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2aa6f8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2aa6f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa6fc: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2aa6fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2aa700: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2aa700u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa704: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2aa704u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2aa708: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2aa708u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aa70c: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2aa70cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2aa710: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2aa710u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aa714: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2aa714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2aa718: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2aa718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aa71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA71Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA71Cu;
        // 0x2aa720: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA71Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA724u;
    // 0x2aa724: 0x0  nop
    ctx->pc = 0x2aa724u;
    // NOP
    ctx->pc = 0x2aa728u;
}
