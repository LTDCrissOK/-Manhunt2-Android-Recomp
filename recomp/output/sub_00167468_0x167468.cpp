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

// Function: sub_00167468
// Address: 0x167468 - 0x1676b0
void sub_00167468_0x167468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167468_0x167468");
#endif

    switch (ctx->pc) {
        case 0x1674d4u: goto label_1674d4;
        case 0x167514u: goto label_167514;
        case 0x167528u: goto label_167528;
        case 0x167590u: goto label_167590;
        case 0x16761cu: goto label_16761c;
        case 0x167654u: goto label_167654;
        default: break;
    }

    ctx->pc = 0x167468u;

    // 0x167468: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x167468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x16746c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x16746cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x167470: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x167470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x167474: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167478: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x167478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x16747c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x16747cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x167480: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x167480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x167484: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x167484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x167488: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x167488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x16748c: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x16748cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x167490: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x167490u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x167494: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x167494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x167498: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x167498u;
    {
        const bool branch_taken_0x167498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167498u;
        // 0x16749c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167498) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x1674A0u;
    // 0x1674a0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1674a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1674a4: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1674A4u;
    {
        const bool branch_taken_0x1674a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1674A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674A4u;
        // 0x1674a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674a4) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x1674ACu;
    // 0x1674ac: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x1674acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x1674b0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1674b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1674b4: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x1674b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1674b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1674b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1674bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1674bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1674c0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x1674c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1674c4: 0x1200006e  beqz        $s0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1674C4u;
    {
        const bool branch_taken_0x1674c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674C4u;
        // 0x1674c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674c4) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x1674CCu;
    // 0x1674cc: 0xc043958  jal         func_10E560
    ctx->pc = 0x1674CCu;
    SET_GPR_U32(ctx, 31, 0x1674D4u);
    ctx->pc = 0x1674D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1674CCu;
    // 0x1674d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x1674CCu, 0x1674D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1674D4u;
label_1674d4:
    // 0x1674d4: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1674D4u;
    {
        const bool branch_taken_0x1674d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674D4u;
        // 0x1674d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674d4) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x1674DCu;
    // 0x1674dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1674dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1674e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1674e4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1674e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1674e8: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1674e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1674ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1674ECu;
    {
        const bool branch_taken_0x1674ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1674ec) {
            ctx->pc = 0x1674F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1674ECu;
            // 0x1674f0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1674FCu;
            goto label_1674fc;
        }
    }
    ctx->pc = 0x1674F4u;
    // 0x1674f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1674F4u;
    {
        const bool branch_taken_0x1674f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1674F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1674F4u;
        // 0x1674f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674f4) {
            ctx->pc = 0x167504u;
            goto label_167504;
        }
    }
    ctx->pc = 0x1674FCu;
label_1674fc:
    // 0x1674fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1674fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167500: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x167500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_167504:
    // 0x167504: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x167504u;
    {
        const bool branch_taken_0x167504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x167504) {
            ctx->pc = 0x167508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167504u;
            // 0x167508: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x167530u;
            goto label_167530;
        }
    }
    ctx->pc = 0x16750Cu;
    // 0x16750c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x16750Cu;
    {
        const bool branch_taken_0x16750c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16750Cu;
        // 0x167510: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16750c) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x167514u;
label_167514:
    // 0x167514: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x167518: 0x8e2602e0  lw          $a2, 0x2E0($s1)
    ctx->pc = 0x167518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x16751c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x16751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x167520: 0xc04add4  jal         func_12B750
    ctx->pc = 0x167520u;
    SET_GPR_U32(ctx, 31, 0x167528u);
    ctx->pc = 0x167524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167520u;
    // 0x167524: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x167520u, 0x167528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167528u;
label_167528:
    // 0x167528: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x167528u;
    {
        const bool branch_taken_0x167528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167528u;
        // 0x16752c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167528) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x167530u;
label_167530:
    // 0x167530: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x167530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167534: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x167534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x167538: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x167538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16753c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x16753cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167540: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x167540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x167544: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x167544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167548: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x167548u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x16754c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x16754cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x167550: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x167550u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x167554: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x167554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167558: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x167558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x16755c: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x16755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167560: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x167560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x167564: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x167564u;
    {
        const bool branch_taken_0x167564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167564u;
        // 0x167568: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167564) {
            ctx->pc = 0x16767Cu;
            goto label_16767c;
        }
    }
    ctx->pc = 0x16756Cu;
    // 0x16756c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x167570: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x167570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x167574: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x167574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x167578: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x167578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x16757c: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x16757cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
    // 0x167580: 0x2675fefc  addiu       $s5, $s3, -0x104
    ctx->pc = 0x167580u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967036));
    // 0x167584: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x167584u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x167588: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x167588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16758c: 0x0  nop
    ctx->pc = 0x16758cu;
    // NOP
label_167590:
    // 0x167590: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x167590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x167594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x167598: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x167598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16759c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x16759Cu;
    {
        const bool branch_taken_0x16759c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16759Cu;
        // 0x1675a0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16759c) {
            ctx->pc = 0x16765Cu;
            goto label_16765c;
        }
    }
    ctx->pc = 0x1675A4u;
    // 0x1675a4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1675a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1675a8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1675a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1675ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1675acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675b0: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1675B0u;
    {
        const bool branch_taken_0x1675b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675B0u;
        // 0x1675b4: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675b0) {
            ctx->pc = 0x16765Cu;
            goto label_16765c;
        }
    }
    ctx->pc = 0x1675B8u;
    // 0x1675b8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1675b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1675bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1675c0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1675c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1675c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1675c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675c8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1675C8u;
    {
        const bool branch_taken_0x1675c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1675c8) {
            ctx->pc = 0x1675CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1675C8u;
            // 0x1675cc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1675D8u;
            goto label_1675d8;
        }
    }
    ctx->pc = 0x1675D0u;
    // 0x1675d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1675D0u;
    {
        const bool branch_taken_0x1675d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675D0u;
        // 0x1675d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675d0) {
            ctx->pc = 0x1675E0u;
            goto label_1675e0;
        }
    }
    ctx->pc = 0x1675D8u;
label_1675d8:
    // 0x1675d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1675d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1675dc: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x1675dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1675e0:
    // 0x1675e0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1675E0u;
    {
        const bool branch_taken_0x1675e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1675E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1675E0u;
        // 0x1675e4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1675e0) {
            ctx->pc = 0x16765Cu;
            goto label_16765c;
        }
    }
    ctx->pc = 0x1675E8u;
    // 0x1675e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1675e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1675ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1675ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1675f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1675f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675f4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1675f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1675f8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1675f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1675fc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1675fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x167600: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x167600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x167604: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x167604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167608: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x167608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x16760c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x16760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167610: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x167610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x167614: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x167614u;
    SET_GPR_U32(ctx, 31, 0x16761Cu);
    ctx->pc = 0x167618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167614u;
    // 0x167618: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x167614u, 0x16761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16761Cu;
label_16761c:
    // 0x16761c: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x16761cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167620: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x167620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167624: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x167624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167628: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167628u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x16762c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x16762cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x167630: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x167630u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x167634: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x167634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167638: 0x0  nop
    ctx->pc = 0x167638u;
    // NOP
    // 0x16763c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x16763Cu;
    {
        const bool branch_taken_0x16763c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16763Cu;
        // 0x167640: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16763c) {
            ctx->pc = 0x167660u;
            goto label_167660;
        }
    }
    ctx->pc = 0x167644u;
    // 0x167644: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x167644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167648: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16764c: 0xc041032  jal         func_1040C8
    ctx->pc = 0x16764Cu;
    SET_GPR_U32(ctx, 31, 0x167654u);
    ctx->pc = 0x167650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16764Cu;
    // 0x167650: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1040C8u, 0x16764Cu, 0x167654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167654u;
label_167654:
    // 0x167654: 0x5040ffaf  beql        $v0, $zero, . + 4 + (-0x51 << 2)
    ctx->pc = 0x167654u;
    {
        const bool branch_taken_0x167654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167654) {
            ctx->pc = 0x167658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167654u;
            // 0x167658: 0x8e220214  lw          $v0, 0x214($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167514u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167514;
        }
    }
    ctx->pc = 0x16765Cu;
label_16765c:
    // 0x16765c: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_167660:
    // 0x167660: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x167660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x167664: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x167664u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x167668: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x167668u;
    {
        const bool branch_taken_0x167668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167668u;
        // 0x16766c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167668) {
            ctx->pc = 0x167680u;
            goto label_167680;
        }
    }
    ctx->pc = 0x167670u;
    // 0x167670: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x167670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x167674: 0x5642ffc6  bnel        $s2, $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x167674u;
    {
        const bool branch_taken_0x167674 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x167674) {
            ctx->pc = 0x167678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167674u;
            // 0x167678: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167590;
        }
    }
    ctx->pc = 0x16767Cu;
label_16767c:
    // 0x16767c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16767cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167680:
    // 0x167680: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x167680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167684: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x167684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x167688: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x167688u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16768c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x16768cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x167690: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x167690u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167694: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x167694u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x167698: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x167698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16769c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x16769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1676a0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1676a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1676a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1676A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1676A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676A4u;
        // 0x1676a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1676A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1676ACu;
    // 0x1676ac: 0x0  nop
    ctx->pc = 0x1676acu;
    // NOP
    ctx->pc = 0x1676b0u;
}
