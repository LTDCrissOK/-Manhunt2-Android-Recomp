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

// Function: sub_0015F470
// Address: 0x15f470 - 0x15f670
void sub_0015F470_0x15f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F470_0x15f470");
#endif

    switch (ctx->pc) {
        case 0x15f530u: goto label_15f530;
        case 0x15f560u: goto label_15f560;
        case 0x15f5d0u: goto label_15f5d0;
        case 0x15f614u: goto label_15f614;
        default: break;
    }

    ctx->pc = 0x15f470u;

    // 0x15f470: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15f474: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f478: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x15f478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x15f47c: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x15f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15f480: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x15f480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x15f484: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15f488: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x15f488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x15f48c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x15f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15f490: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x15f490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x15f494: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x15f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x15f498: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x15f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x15f49c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x15f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x15f4a0: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x15f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x15f4a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15f4a8: 0x8ca2020c  lw          $v0, 0x20C($a1)
    ctx->pc = 0x15f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x15f4ac: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x15F4ACu;
    {
        const bool branch_taken_0x15f4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4ACu;
        // 0x15f4b0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4ac) {
            ctx->pc = 0x15F63Cu;
            goto label_15f63c;
        }
    }
    ctx->pc = 0x15F4B4u;
    // 0x15f4b4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x15f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15f4b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f4bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15f4c0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x15f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x15f4c4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F4C4u;
    {
        const bool branch_taken_0x15f4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f4c4) {
            ctx->pc = 0x15F4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F4C4u;
            // 0x15f4c8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F4D4u;
            goto label_15f4d4;
        }
    }
    ctx->pc = 0x15F4CCu;
    // 0x15f4cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F4CCu;
    {
        const bool branch_taken_0x15f4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4CCu;
        // 0x15f4d0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4cc) {
            ctx->pc = 0x15F4DCu;
            goto label_15f4dc;
        }
    }
    ctx->pc = 0x15F4D4u;
label_15f4d4:
    // 0x15f4d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f4d8: 0x24730070  addiu       $s3, $v1, 0x70
    ctx->pc = 0x15f4d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f4dc:
    // 0x15f4dc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x15f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f4e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15f4e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4e4: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x15f4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x15f4e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15f4e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15f4ec: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15f4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15f4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15f4f4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x15f4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f4f8: 0x92820009  lbu         $v0, 0x9($s4)
    ctx->pc = 0x15f4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
    // 0x15f4fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f4fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f500: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15f500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15f504: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x15f504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f508: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15f508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15f50c: 0xc662000c  lwc1        $f2, 0xC($s3)
    ctx->pc = 0x15f50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f510: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x15f510u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15f514: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x15F514u;
    {
        const bool branch_taken_0x15f514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F514u;
        // 0x15f518: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f514) {
            ctx->pc = 0x15F63Cu;
            goto label_15f63c;
        }
    }
    ctx->pc = 0x15F51Cu;
    // 0x15f51c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f520: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x15f520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15f524: 0x24559c14  addiu       $s5, $v0, -0x63EC
    ctx->pc = 0x15f524u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15f528: 0x26b6fefc  addiu       $s6, $s5, -0x104
    ctx->pc = 0x15f528u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967036));
    // 0x15f52c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x15f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_15f530:
    // 0x15f530: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15f530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15f534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f53c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x15F53Cu;
    {
        const bool branch_taken_0x15f53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F53Cu;
        // 0x15f540: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f53c) {
            ctx->pc = 0x15F61Cu;
            goto label_15f61c;
        }
    }
    ctx->pc = 0x15F544u;
    // 0x15f544: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x15f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15f548: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x15f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15f54c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15f54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f550: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x15F550u;
    {
        const bool branch_taken_0x15f550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F550u;
        // 0x15f554: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f550) {
            ctx->pc = 0x15F61Cu;
            goto label_15f61c;
        }
    }
    ctx->pc = 0x15F558u;
    // 0x15f558: 0xc0439d6  jal         func_10E758
    ctx->pc = 0x15F558u;
    SET_GPR_U32(ctx, 31, 0x15F560u);
    ctx->pc = 0x15F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F558u;
    // 0x15f55c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E758u, 0x15F558u, 0x15F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F560u;
label_15f560:
    // 0x15f560: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x15F560u;
    {
        const bool branch_taken_0x15f560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F560u;
        // 0x15f564: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f560) {
            ctx->pc = 0x15F620u;
            goto label_15f620;
        }
    }
    ctx->pc = 0x15F568u;
    // 0x15f568: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f56c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f570: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x15f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x15f574: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f578: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F578u;
    {
        const bool branch_taken_0x15f578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f578) {
            ctx->pc = 0x15F57Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F578u;
            // 0x15f57c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F588u;
            goto label_15f588;
        }
    }
    ctx->pc = 0x15F580u;
    // 0x15f580: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F580u;
    {
        const bool branch_taken_0x15f580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F580u;
        // 0x15f584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f580) {
            ctx->pc = 0x15F590u;
            goto label_15f590;
        }
    }
    ctx->pc = 0x15F588u;
label_15f588:
    // 0x15f588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f58c: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x15f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f590:
    // 0x15f590: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15f590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f594: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15f594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f598: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x15f598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
    // 0x15f59c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15f59cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15f5a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15f5a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x15f5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x15f5a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15f5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f5ac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x15f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15f5b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f5b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x15f5b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x15f5b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15f5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15f5bc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x15f5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x15f5c0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x15f5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f5c4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x15f5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x15f5c8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15F5C8u;
    SET_GPR_U32(ctx, 31, 0x15F5D0u);
    ctx->pc = 0x15F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F5C8u;
    // 0x15f5cc: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15F5C8u, 0x15F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F5D0u;
label_15f5d0:
    // 0x15f5d0: 0xc6e20000  lwc1        $f2, 0x0($s7)
    ctx->pc = 0x15f5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f5d4: 0xc6e30004  lwc1        $f3, 0x4($s7)
    ctx->pc = 0x15f5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f5d8: 0xc6e40008  lwc1        $f4, 0x8($s7)
    ctx->pc = 0x15f5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15f5dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15f5dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15f5e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15f5e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15f5e4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15f5e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15f5e8: 0x3c0145c8  lui         $at, 0x45C8
    ctx->pc = 0x15f5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17864 << 16));
    // 0x15f5ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15f5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15f5f0: 0x0  nop
    ctx->pc = 0x15f5f0u;
    // NOP
    // 0x15f5f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15f5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f5f8: 0x0  nop
    ctx->pc = 0x15f5f8u;
    // NOP
    // 0x15f5fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x15F5FCu;
    {
        const bool branch_taken_0x15f5fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5FCu;
        // 0x15f600: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5fc) {
            ctx->pc = 0x15F620u;
            goto label_15f620;
        }
    }
    ctx->pc = 0x15F604u;
    // 0x15f604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f608: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x15f608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15f60c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x15F60Cu;
    SET_GPR_U32(ctx, 31, 0x15F614u);
    ctx->pc = 0x15F610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F60Cu;
    // 0x15f610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x15F60Cu, 0x15F614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F614u;
label_15f614:
    // 0x15f614: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15F614u;
    {
        const bool branch_taken_0x15f614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F614u;
        // 0x15f618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f614) {
            ctx->pc = 0x15F640u;
            goto label_15f640;
        }
    }
    ctx->pc = 0x15F61Cu;
label_15f61c:
    // 0x15f61c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f620:
    // 0x15f620: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15f620u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15f624: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x15f624u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15f628: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F628u;
    {
        const bool branch_taken_0x15f628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F628u;
        // 0x15f62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f628) {
            ctx->pc = 0x15F640u;
            goto label_15f640;
        }
    }
    ctx->pc = 0x15F630u;
    // 0x15f630: 0x92820009  lbu         $v0, 0x9($s4)
    ctx->pc = 0x15f630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 9)));
    // 0x15f634: 0x5642ffbe  bnel        $s2, $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x15F634u;
    {
        const bool branch_taken_0x15f634 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f634) {
            ctx->pc = 0x15F638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F634u;
            // 0x15f638: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f530;
        }
    }
    ctx->pc = 0x15F63Cu;
label_15f63c:
    // 0x15f63c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f640:
    // 0x15f640: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x15f640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f644: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x15f644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15f648: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x15f648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f64c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x15f64cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15f650: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x15f650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f654: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x15f654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15f658: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x15f658u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15f65c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x15f65cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15f660: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15f660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15f664: 0x3e00008  jr          $ra
    ctx->pc = 0x15F664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F664u;
        // 0x15f668: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F66Cu;
    // 0x15f66c: 0x0  nop
    ctx->pc = 0x15f66cu;
    // NOP
    ctx->pc = 0x15f670u;
}
