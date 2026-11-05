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

// Function: sub_003E04E8
// Address: 0x3e04e8 - 0x3e07a8
void sub_003E04E8_0x3e04e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E04E8_0x3e04e8");
#endif

    switch (ctx->pc) {
        case 0x3e0510u: goto label_3e0510;
        case 0x3e0680u: goto label_3e0680;
        default: break;
    }

    ctx->pc = 0x3e04e8u;

    // 0x3e04e8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x3e04e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e04ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e04ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e04f0: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x3e04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x3e04f4: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3e04f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e04f8: 0x24680002  addiu       $t0, $v1, 0x2
    ctx->pc = 0x3e04f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x3e04fc: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x3e04fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3e0500: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3E0500u;
    {
        const bool branch_taken_0x3e0500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0500u;
        // 0x3e0504: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0500) {
            ctx->pc = 0x3E061Cu;
            goto label_3e061c;
        }
    }
    ctx->pc = 0x3E0508u;
    // 0x3e0508: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e0508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e050c: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x3e050cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_3e0510:
    // 0x3e0510: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x3e0510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3e0514: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3e0514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0518: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x3e0518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x3e051c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3e051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e0520: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e0520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0524: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0528: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e052c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E052Cu;
    {
        const bool branch_taken_0x3e052c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E052Cu;
        // 0x3e0530: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e052c) {
            ctx->pc = 0x3E0548u;
            goto label_3e0548;
        }
    }
    ctx->pc = 0x3E0534u;
    // 0x3e0534: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e0534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0538: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e0538u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e053c: 0x0  nop
    ctx->pc = 0x3e053cu;
    // NOP
    // 0x3e0540: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0540u;
    {
        const bool branch_taken_0x3e0540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0540) {
            ctx->pc = 0x3E0544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0540u;
            // 0x3e0544: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0548u;
            goto label_3e0548;
        }
    }
    ctx->pc = 0x3E0548u;
label_3e0548:
    // 0x3e0548: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e0548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e054c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0550: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0554: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0558: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0558u;
    {
        const bool branch_taken_0x3e0558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0558u;
        // 0x3e055c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0558) {
            ctx->pc = 0x3E0574u;
            goto label_3e0574;
        }
    }
    ctx->pc = 0x3E0560u;
    // 0x3e0560: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0564: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e0564u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0568: 0x0  nop
    ctx->pc = 0x3e0568u;
    // NOP
    // 0x3e056c: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x3E056Cu;
    {
        const bool branch_taken_0x3e056c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E056Cu;
        // 0x3e0570: 0x39230001  xori        $v1, $t1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e056c) {
            ctx->pc = 0x3E05DCu;
            goto label_3e05dc;
        }
    }
    ctx->pc = 0x3E0574u;
label_3e0574:
    // 0x3e0574: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e0574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0578: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e057c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E057Cu;
    {
        const bool branch_taken_0x3e057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E057Cu;
        // 0x3e0580: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e057c) {
            ctx->pc = 0x3E05A4u;
            goto label_3e05a4;
        }
    }
    ctx->pc = 0x3E0584u;
    // 0x3e0584: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0584u;
    {
        const bool branch_taken_0x3e0584 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0584u;
        // 0x3e0588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0584) {
            ctx->pc = 0x3E059Cu;
            goto label_3e059c;
        }
    }
    ctx->pc = 0x3E058Cu;
    // 0x3e058c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3e058cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e0590: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0594: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0598: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e0598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e059c:
    // 0x3e059c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E059Cu;
    {
        const bool branch_taken_0x3e059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E05A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E059Cu;
        // 0x3e05a0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e059c) {
            ctx->pc = 0x3E05DCu;
            goto label_3e05dc;
        }
    }
    ctx->pc = 0x3E05A4u;
label_3e05a4:
    // 0x3e05a4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e05a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e05a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E05A8u;
    {
        const bool branch_taken_0x3e05a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05A8u;
        // 0x3e05ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e05a8) {
            ctx->pc = 0x3E05DCu;
            goto label_3e05dc;
        }
    }
    ctx->pc = 0x3E05B0u;
    // 0x3e05b0: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E05B0u;
    {
        const bool branch_taken_0x3e05b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05B0u;
        // 0x3e05b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e05b0) {
            ctx->pc = 0x3E05D8u;
            goto label_3e05d8;
        }
    }
    ctx->pc = 0x3E05B8u;
    // 0x3e05b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e05bc: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x3e05bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x3e05c0: 0x3843020f  xori        $v1, $v0, 0x20F
    ctx->pc = 0x3e05c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e05c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E05C4u;
    {
        const bool branch_taken_0x3e05c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E05C4u;
        // 0x3e05c8: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e05c4) {
            ctx->pc = 0x3E05D8u;
            goto label_3e05d8;
        }
    }
    ctx->pc = 0x3E05CCu;
    // 0x3e05cc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e05ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e05d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e05d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e05d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e05d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e05d8:
    // 0x3e05d8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e05d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e05dc:
    // 0x3e05dc: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x3e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e05e0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3e05e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3e05e4: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x3e05e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x3e05e8: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x3e05e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3e05ec: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x3e05ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e05f0: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x3e05f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3e05f4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x3e05f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3e05f8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3e05f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3e05fc: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x3e05fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e0600: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x3e0600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e0604: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x3e0604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e0608: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3e0608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e060c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3e060cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0610: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x3e0610u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3e0614: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x3E0614u;
    {
        const bool branch_taken_0x3e0614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0614u;
        // 0x3e0618: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0614) {
            ctx->pc = 0x3E0510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0510;
        }
    }
    ctx->pc = 0x3E061Cu;
label_3e061c:
    // 0x3e061c: 0x1506000b  bne         $t0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3E061Cu;
    {
        const bool branch_taken_0x3e061c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x3E0620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E061Cu;
        // 0x3e0620: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e061c) {
            ctx->pc = 0x3E064Cu;
            goto label_3e064c;
        }
    }
    ctx->pc = 0x3E0624u;
    // 0x3e0624: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3e0624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3e0628: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x3e0628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3e062c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3e062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3e0630: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3e0630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3e0634: 0x684dffff  ldl         $t5, -0x1($v0)
    ctx->pc = 0x3e0634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3e0638: 0x6c4dfff8  ldr         $t5, -0x8($v0)
    ctx->pc = 0x3e0638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x3e063c: 0xb06d0007  sdl         $t5, 0x7($v1)
    ctx->pc = 0x3e063cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0640: 0xb46d0000  sdr         $t5, 0x0($v1)
    ctx->pc = 0x3e0640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0644: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x3e0644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3e0648: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3e0648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e064c:
    // 0x3e064c: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x3e064cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3e0650: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x3e0650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3e0654: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x3e0654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0658: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x3e0658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e065c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3e065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e0660: 0x167202a  slt         $a0, $t3, $a3
    ctx->pc = 0x3e0660u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3e0664: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e0664u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e0668: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e066c: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3E066Cu;
    {
        const bool branch_taken_0x3e066c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E066Cu;
        // 0x3e0670: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e066c) {
            ctx->pc = 0x3E0784u;
            goto label_3e0784;
        }
    }
    ctx->pc = 0x3E0674u;
    // 0x3e0674: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e0674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e0678: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x3e0678u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e067c: 0x0  nop
    ctx->pc = 0x3e067cu;
    // NOP
label_3e0680:
    // 0x3e0680: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3e0680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e0684: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x3e0684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x3e0688: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3e0688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e068c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e068cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0690: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e0690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0694: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0698: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e069c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E069Cu;
    {
        const bool branch_taken_0x3e069c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E06A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E069Cu;
        // 0x3e06a0: 0x6a1821  addu        $v1, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e069c) {
            ctx->pc = 0x3E06B8u;
            goto label_3e06b8;
        }
    }
    ctx->pc = 0x3E06A4u;
    // 0x3e06a4: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e06a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e06a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e06a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e06ac: 0x0  nop
    ctx->pc = 0x3e06acu;
    // NOP
    // 0x3e06b0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E06B0u;
    {
        const bool branch_taken_0x3e06b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e06b0) {
            ctx->pc = 0x3E06B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E06B0u;
            // 0x3e06b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E06B8u;
            goto label_3e06b8;
        }
    }
    ctx->pc = 0x3E06B8u;
label_3e06b8:
    // 0x3e06b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e06b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e06bc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e06bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e06c0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e06c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e06c4: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e06c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e06c8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E06C8u;
    {
        const bool branch_taken_0x3e06c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06C8u;
        // 0x3e06cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06c8) {
            ctx->pc = 0x3E06E4u;
            goto label_3e06e4;
        }
    }
    ctx->pc = 0x3E06D0u;
    // 0x3e06d0: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e06d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e06d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e06d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e06d8: 0x0  nop
    ctx->pc = 0x3e06d8u;
    // NOP
    // 0x3e06dc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x3E06DCu;
    {
        const bool branch_taken_0x3e06dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E06E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06DCu;
        // 0x3e06e0: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06dc) {
            ctx->pc = 0x3E0748u;
            goto label_3e0748;
        }
    }
    ctx->pc = 0x3E06E4u;
label_3e06e4:
    // 0x3e06e4: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e06e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e06e8: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e06e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e06ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E06ECu;
    {
        const bool branch_taken_0x3e06ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e06ec) {
            ctx->pc = 0x3E06F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E06ECu;
            // 0x3e06f0: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0710u;
            goto label_3e0710;
        }
    }
    ctx->pc = 0x3E06F4u;
    // 0x3e06f4: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E06F4u;
    {
        const bool branch_taken_0x3e06f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E06F4u;
        // 0x3e06f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e06f4) {
            ctx->pc = 0x3E0748u;
            goto label_3e0748;
        }
    }
    ctx->pc = 0x3E06FCu;
    // 0x3e06fc: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3e06fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e0700: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0704: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0708: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E0708u;
    {
        const bool branch_taken_0x3e0708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0708u;
        // 0x3e070c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0708) {
            ctx->pc = 0x3E0748u;
            goto label_3e0748;
        }
    }
    ctx->pc = 0x3E0710u;
label_3e0710:
    // 0x3e0710: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0714: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E0714u;
    {
        const bool branch_taken_0x3e0714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0714u;
        // 0x3e0718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0714) {
            ctx->pc = 0x3E0748u;
            goto label_3e0748;
        }
    }
    ctx->pc = 0x3E071Cu;
    // 0x3e071c: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E071Cu;
    {
        const bool branch_taken_0x3e071c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E071Cu;
        // 0x3e0720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e071c) {
            ctx->pc = 0x3E0744u;
            goto label_3e0744;
        }
    }
    ctx->pc = 0x3E0724u;
    // 0x3e0724: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3e0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e0728: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x3e0728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x3e072c: 0x3843020f  xori        $v1, $v0, 0x20F
    ctx->pc = 0x3e072cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0730: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0730u;
    {
        const bool branch_taken_0x3e0730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0730u;
        // 0x3e0734: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0730) {
            ctx->pc = 0x3E0744u;
            goto label_3e0744;
        }
    }
    ctx->pc = 0x3E0738u;
    // 0x3e0738: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e073c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e073cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e0740: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e0740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0744:
    // 0x3e0744: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e0744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0748:
    // 0x3e0748: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3E0748u;
    {
        const bool branch_taken_0x3e0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0748u;
        // 0x3e074c: 0x720c0  sll         $a0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0748) {
            ctx->pc = 0x3E0784u;
            goto label_3e0784;
        }
    }
    ctx->pc = 0x3E0750u;
    // 0x3e0750: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x3e0750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x3e0754: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3e0754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0758: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x3e0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x3e075c: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x3e075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3e0760: 0x68cd0007  ldl         $t5, 0x7($a2)
    ctx->pc = 0x3e0760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3e0764: 0x6ccd0000  ldr         $t5, 0x0($a2)
    ctx->pc = 0x3e0764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x3e0768: 0xb08d0007  sdl         $t5, 0x7($a0)
    ctx->pc = 0x3e0768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e076c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e076cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e0770: 0xb48d0000  sdr         $t5, 0x0($a0)
    ctx->pc = 0x3e0770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e0778: 0x167282a  slt         $a1, $t3, $a3
    ctx->pc = 0x3e0778u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3e077c: 0x14a0ffc0  bnez        $a1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x3E077Cu;
    {
        const bool branch_taken_0x3e077c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E077Cu;
        // 0x3e0780: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e077c) {
            ctx->pc = 0x3E0680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0680;
        }
    }
    ctx->pc = 0x3E0784u;
label_3e0784:
    // 0x3e0784: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3e0784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3e0788: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3e0788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3e078c: 0x6bad0017  ldl         $t5, 0x17($sp)
    ctx->pc = 0x3e078cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x3e0790: 0x6fad0010  ldr         $t5, 0x10($sp)
    ctx->pc = 0x3e0790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x3e0794: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x3e0794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0798: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x3e0798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e079c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E079Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E07A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E079Cu;
        // 0x3e07a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E079Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E07A4u;
    // 0x3e07a4: 0x0  nop
    ctx->pc = 0x3e07a4u;
    // NOP
    ctx->pc = 0x3e07a8u;
}
