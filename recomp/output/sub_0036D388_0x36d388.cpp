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

// Function: sub_0036D388
// Address: 0x36d388 - 0x36d658
void sub_0036D388_0x36d388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D388_0x36d388");
#endif

    switch (ctx->pc) {
        case 0x36d3e8u: goto label_36d3e8;
        case 0x36d42cu: goto label_36d42c;
        case 0x36d450u: goto label_36d450;
        case 0x36d480u: goto label_36d480;
        case 0x36d4a8u: goto label_36d4a8;
        case 0x36d4b8u: goto label_36d4b8;
        case 0x36d534u: goto label_36d534;
        case 0x36d568u: goto label_36d568;
        case 0x36d5e8u: goto label_36d5e8;
        default: break;
    }

    ctx->pc = 0x36d388u;

    // 0x36d388: 0x27bdfd90  addiu       $sp, $sp, -0x270
    ctx->pc = 0x36d388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966672));
    // 0x36d38c: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x36d38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x36d390: 0xffb30228  sd          $s3, 0x228($sp)
    ctx->pc = 0x36d390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 19));
    // 0x36d394: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36d394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d398: 0xffb40230  sd          $s4, 0x230($sp)
    ctx->pc = 0x36d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 20));
    // 0x36d39c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x36d39cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3a0: 0xffb50238  sd          $s5, 0x238($sp)
    ctx->pc = 0x36d3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 21));
    // 0x36d3a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x36d3a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3a8: 0xffb60240  sd          $s6, 0x240($sp)
    ctx->pc = 0x36d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 22));
    // 0x36d3ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x36d3acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3b0: 0xffb70248  sd          $s7, 0x248($sp)
    ctx->pc = 0x36d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 23));
    // 0x36d3b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x36d3b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3b8: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x36d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x36d3bc: 0xffb10218  sd          $s1, 0x218($sp)
    ctx->pc = 0x36d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 17));
    // 0x36d3c0: 0xffbe0250  sd          $fp, 0x250($sp)
    ctx->pc = 0x36d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 30));
    // 0x36d3c4: 0xffbf0258  sd          $ra, 0x258($sp)
    ctx->pc = 0x36d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 31));
    // 0x36d3c8: 0xe7b50268  swc1        $f21, 0x268($sp)
    ctx->pc = 0x36d3c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
    // 0x36d3cc: 0xe7b40260  swc1        $f20, 0x260($sp)
    ctx->pc = 0x36d3ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
    // 0x36d3d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x36d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d3d4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36D3D4u;
    {
        const bool branch_taken_0x36d3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D3D4u;
        // 0x36d3d8: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d3d4) {
            ctx->pc = 0x36D43Cu;
            goto label_36d43c;
        }
    }
    ctx->pc = 0x36D3DCu;
    // 0x36d3dc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x36d3dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d3e0: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x36d3e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3e4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x36d3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36d3e8:
    // 0x36d3e8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x36D3E8u;
    {
        const bool branch_taken_0x36d3e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D3E8u;
        // 0x36d3ec: 0x3282ffff  andi        $v0, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d3e8) {
            ctx->pc = 0x36D3F4u;
            goto label_36d3f4;
        }
    }
    ctx->pc = 0x36D3F0u;
    // 0x36d3f0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x36d3f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_36d3f4:
    // 0x36d3f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36d3f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d3fc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x36d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x36d400: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x36d400u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x36d404: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x36d404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36d408: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x36d408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36d40c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x36d40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36d410: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x36d410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36d414: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x36d414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d418: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x36d418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d41c: 0xb205000f  sdl         $a1, 0xF($s0)
    ctx->pc = 0x36d41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d420: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x36d420u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x36d424: 0xc0db3e6  jal         func_36CF98
    ctx->pc = 0x36D424u;
    SET_GPR_U32(ctx, 31, 0x36D42Cu);
    ctx->pc = 0x36D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D424u;
    // 0x36d428: 0xb6050008  sdr         $a1, 0x8($s0) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CF98u, 0x36D424u, 0x36D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D42Cu;
label_36d42c:
    // 0x36d42c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x36d42cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x36d430: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x36d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d434: 0x1683ffec  bne         $s4, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x36D434u;
    {
        const bool branch_taken_0x36d434 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x36D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D434u;
        // 0x36d438: 0x3c2a80b  movn        $s5, $fp, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d434) {
            ctx->pc = 0x36D3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d3e8;
        }
    }
    ctx->pc = 0x36D43Cu;
label_36d43c:
    // 0x36d43c: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x36D43Cu;
    {
        const bool branch_taken_0x36d43c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D43Cu;
        // 0x36d440: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d43c) {
            ctx->pc = 0x36D44Cu;
            goto label_36d44c;
        }
    }
    ctx->pc = 0x36D444u;
    // 0x36d444: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x36D444u;
    {
        const bool branch_taken_0x36d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D444u;
        // 0x36d448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d444) {
            ctx->pc = 0x36D620u;
            goto label_36d620;
        }
    }
    ctx->pc = 0x36D44Cu;
label_36d44c:
    // 0x36d44c: 0x3ac20001  xori        $v0, $s6, 0x1
    ctx->pc = 0x36d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)1);
label_36d450:
    // 0x36d450: 0x161a00  sll         $v1, $s6, 8
    ctx->pc = 0x36d450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 8));
    // 0x36d454: 0xafa20200  sw          $v0, 0x200($sp)
    ctx->pc = 0x36d454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 2));
    // 0x36d458: 0x3a38821  addu        $s1, $sp, $v1
    ctx->pc = 0x36d458u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36d45c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x36d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x36d460: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x36d460u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d464: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x36d464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x36d468: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x36d468u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d46c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x36d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d470: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x36D470u;
    {
        const bool branch_taken_0x36d470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D470u;
        // 0x36d474: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d470) {
            ctx->pc = 0x36D5A4u;
            goto label_36d5a4;
        }
    }
    ctx->pc = 0x36D478u;
    // 0x36d478: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x36d478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x36d47c: 0x0  nop
    ctx->pc = 0x36d47cu;
    // NOP
label_36d480:
    // 0x36d480: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x36d480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d484: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x36d484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x36d488: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36d488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d48c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x36d48cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d490: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x36d490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x36d494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36d494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d498: 0x2a31826  xor         $v1, $s5, $v1
    ctx->pc = 0x36d498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 3));
    // 0x36d49c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x36d49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d4a0: 0xc0db412  jal         func_36D048
    ctx->pc = 0x36D4A0u;
    SET_GPR_U32(ctx, 31, 0x36D4A8u);
    ctx->pc = 0x36D4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D4A0u;
    // 0x36d4a4: 0x2e3900a  movz        $s2, $s7, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D048u, 0x36D4A0u, 0x36D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D4A8u;
label_36d4a8:
    // 0x36d4a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36d4a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36d4ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36d4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d4b0: 0xc0db412  jal         func_36D048
    ctx->pc = 0x36D4B0u;
    SET_GPR_U32(ctx, 31, 0x36D4B8u);
    ctx->pc = 0x36D4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D4B0u;
    // 0x36d4b4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D048u, 0x36D4B0u, 0x36D4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D4B8u;
label_36d4b8:
    // 0x36d4b8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x36d4b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d4bc: 0x0  nop
    ctx->pc = 0x36d4bcu;
    // NOP
    // 0x36d4c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x36D4C0u;
    {
        const bool branch_taken_0x36d4c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4C0u;
        // 0x36d4c4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4c0) {
            ctx->pc = 0x36D4CCu;
            goto label_36d4cc;
        }
    }
    ctx->pc = 0x36D4C8u;
    // 0x36d4c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36d4c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36d4cc:
    // 0x36d4cc: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x36d4ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36d4d0: 0x0  nop
    ctx->pc = 0x36d4d0u;
    // NOP
    // 0x36d4d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x36D4D4u;
    {
        const bool branch_taken_0x36d4d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D4D4u;
        // 0x36d4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d4d4) {
            ctx->pc = 0x36D4E0u;
            goto label_36d4e0;
        }
    }
    ctx->pc = 0x36D4DCu;
    // 0x36d4dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36d4dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36d4e0:
    // 0x36d4e0: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x36D4E0u;
    {
        const bool branch_taken_0x36d4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d4e0) {
            ctx->pc = 0x36D53Cu;
            goto label_36d53c;
        }
    }
    ctx->pc = 0x36D4E8u;
    // 0x36d4e8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x36D4E8u;
    {
        const bool branch_taken_0x36d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d4e8) {
            ctx->pc = 0x36D570u;
            goto label_36d570;
        }
    }
    ctx->pc = 0x36D4F0u;
    // 0x36d4f0: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x36d4f0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x36d4f4: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x36d4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x36d4f8: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x36d4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x36d4fc: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x36d4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x36d500: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x36d500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x36d504: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x36d504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d508: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x36d508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d50c: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x36d50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d510: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x36d510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d514: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x36d514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x36d518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d51c: 0x0  nop
    ctx->pc = 0x36d51cu;
    // NOP
    // 0x36d520: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x36d520u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
    // 0x36d524: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36d524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d528: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36d528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d52c: 0xc0db444  jal         func_36D110
    ctx->pc = 0x36D52Cu;
    SET_GPR_U32(ctx, 31, 0x36D534u);
    ctx->pc = 0x36D530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D52Cu;
    // 0x36d530: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D110u, 0x36D52Cu, 0x36D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D534u;
label_36d534:
    // 0x36d534: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x36D534u;
    {
        const bool branch_taken_0x36d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D534u;
        // 0x36d538: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d534) {
            ctx->pc = 0x36D598u;
            goto label_36d598;
        }
    }
    ctx->pc = 0x36D53Cu;
label_36d53c:
    // 0x36d53c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x36D53Cu;
    {
        const bool branch_taken_0x36d53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d53c) {
            ctx->pc = 0x36D540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D53Cu;
            // 0x36d540: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D598u;
            goto label_36d598;
        }
    }
    ctx->pc = 0x36D544u;
    // 0x36d544: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x36d544u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x36d548: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36d548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36d54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d550: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36d550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d554: 0x0  nop
    ctx->pc = 0x36d554u;
    // NOP
    // 0x36d558: 0x0  nop
    ctx->pc = 0x36d558u;
    // NOP
    // 0x36d55c: 0x460ca303  div.s       $f12, $f20, $f12
    ctx->pc = 0x36d55cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[20], ctx->f[12]); }
    // 0x36d560: 0xc0db444  jal         func_36D110
    ctx->pc = 0x36D560u;
    SET_GPR_U32(ctx, 31, 0x36D568u);
    ctx->pc = 0x36D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D560u;
    // 0x36d564: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D110u, 0x36D560u, 0x36D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D568u;
label_36d568:
    // 0x36d568: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36D568u;
    {
        const bool branch_taken_0x36d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D568u;
        // 0x36d56c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d568) {
            ctx->pc = 0x36D598u;
            goto label_36d598;
        }
    }
    ctx->pc = 0x36D570u;
label_36d570:
    // 0x36d570: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x36d570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36d574: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x36d574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36d578: 0x6a27000f  ldl         $a3, 0xF($s1)
    ctx->pc = 0x36d578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x36d57c: 0x6e270008  ldr         $a3, 0x8($s1)
    ctx->pc = 0x36d57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x36d580: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x36d580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d584: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x36d584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d588: 0xb207000f  sdl         $a3, 0xF($s0)
    ctx->pc = 0x36d588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d58c: 0xb6070008  sdr         $a3, 0x8($s0)
    ctx->pc = 0x36d58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d590: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x36d590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x36d594: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x36d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36d598:
    // 0x36d598: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x36d598u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x36d59c: 0x16a2ffb8  bne         $s5, $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x36D59Cu;
    {
        const bool branch_taken_0x36d59c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x36D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D59Cu;
        // 0x36d5a0: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d59c) {
            ctx->pc = 0x36D480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d480;
        }
    }
    ctx->pc = 0x36D5A4u;
label_36d5a4:
    // 0x36d5a4: 0x21e1023  subu        $v0, $s0, $fp
    ctx->pc = 0x36d5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x36d5a8: 0x8fb60200  lw          $s6, 0x200($sp)
    ctx->pc = 0x36d5a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x36d5ac: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x36d5acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
    // 0x36d5b0: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x36d5b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x36d5b4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x36D5B4u;
    {
        const bool branch_taken_0x36d5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5B4u;
        // 0x36d5b8: 0xae660000  sw          $a2, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5b4) {
            ctx->pc = 0x36D61Cu;
            goto label_36d61c;
        }
    }
    ctx->pc = 0x36D5BCu;
    // 0x36d5bc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x36d5bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x36d5c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36d5c4: 0x1682ffa2  bne         $s4, $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x36D5C4u;
    {
        const bool branch_taken_0x36d5c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x36D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5C4u;
        // 0x36d5c8: 0x3ac20001  xori        $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5c4) {
            ctx->pc = 0x36D450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d450;
        }
    }
    ctx->pc = 0x36D5CCu;
    // 0x36d5cc: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x36D5CCu;
    {
        const bool branch_taken_0x36d5cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D5CCu;
        // 0x36d5d0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d5cc) {
            ctx->pc = 0x36D61Cu;
            goto label_36d61c;
        }
    }
    ctx->pc = 0x36D5D4u;
    // 0x36d5d4: 0x8fa40200  lw          $a0, 0x200($sp)
    ctx->pc = 0x36d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x36d5d8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x36d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36d5dc: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x36d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x36d5e0: 0x2444f058  addiu       $a0, $v0, -0xFA8
    ctx->pc = 0x36d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963288));
    // 0x36d5e4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x36d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_36d5e8:
    // 0x36d5e8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x36d5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x36d5ec: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x36d5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x36d5f0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x36d5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36d5f4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x36d5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36d5f8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x36d5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d5fc: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x36d5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d600: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x36d600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d604: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x36d604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x36d608: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x36d608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d60c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x36d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36d610: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x36d610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x36d614: 0x1682fff4  bne         $s4, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x36D614u;
    {
        const bool branch_taken_0x36d614 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x36D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D614u;
        // 0x36d618: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d614) {
            ctx->pc = 0x36D5E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d5e8;
        }
    }
    ctx->pc = 0x36D61Cu;
label_36d61c:
    // 0x36d61c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36d620:
    // 0x36d620: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x36d620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x36d624: 0xdfb10218  ld          $s1, 0x218($sp)
    ctx->pc = 0x36d624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x36d628: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x36d628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x36d62c: 0xdfb30228  ld          $s3, 0x228($sp)
    ctx->pc = 0x36d62cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x36d630: 0xdfb40230  ld          $s4, 0x230($sp)
    ctx->pc = 0x36d630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x36d634: 0xdfb50238  ld          $s5, 0x238($sp)
    ctx->pc = 0x36d634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x36d638: 0xdfb60240  ld          $s6, 0x240($sp)
    ctx->pc = 0x36d638u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x36d63c: 0xdfb70248  ld          $s7, 0x248($sp)
    ctx->pc = 0x36d63cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x36d640: 0xdfbe0250  ld          $fp, 0x250($sp)
    ctx->pc = 0x36d640u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x36d644: 0xdfbf0258  ld          $ra, 0x258($sp)
    ctx->pc = 0x36d644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x36d648: 0xc7b50268  lwc1        $f21, 0x268($sp)
    ctx->pc = 0x36d648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36d64c: 0xc7b40260  lwc1        $f20, 0x260($sp)
    ctx->pc = 0x36d64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36d650: 0x3e00008  jr          $ra
    ctx->pc = 0x36D650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D650u;
        // 0x36d654: 0x27bd0270  addiu       $sp, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D658u;
}
