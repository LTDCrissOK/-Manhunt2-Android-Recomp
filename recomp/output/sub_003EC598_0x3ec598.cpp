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

// Function: sub_003EC598
// Address: 0x3ec598 - 0x3ec8d0
void sub_003EC598_0x3ec598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC598_0x3ec598");
#endif

    switch (ctx->pc) {
        case 0x3ec5bcu: goto label_3ec5bc;
        case 0x3ec698u: goto label_3ec698;
        case 0x3ec6d0u: goto label_3ec6d0;
        case 0x3ec740u: goto label_3ec740;
        case 0x3ec7e0u: goto label_3ec7e0;
        case 0x3ec840u: goto label_3ec840;
        case 0x3ec84cu: goto label_3ec84c;
        case 0x3ec898u: goto label_3ec898;
        default: break;
    }

    ctx->pc = 0x3ec598u;

    // 0x3ec598: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3ec598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3ec59c: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3ec59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x3ec5a0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3ec5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x3ec5a4: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x3ec5a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3ec5a8: 0x14a00084  bnez        $a1, . + 4 + (0x84 << 2)
    ctx->pc = 0x3EC5A8u;
    {
        const bool branch_taken_0x3ec5a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5A8u;
        // 0x3ec5ac: 0x826821  addu        $t5, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec5a8) {
            ctx->pc = 0x3EC7BCu;
            goto label_3ec7bc;
        }
    }
    ctx->pc = 0x3EC5B0u;
    // 0x3ec5b0: 0x27ab0008  addiu       $t3, $sp, 0x8
    ctx->pc = 0x3ec5b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x3ec5b4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3ec5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec5b8: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x3ec5b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3ec5bc:
    // 0x3ec5bc: 0x3ab102b  sltu        $v0, $sp, $t3
    ctx->pc = 0x3ec5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 29) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3ec5c0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x3EC5C0u;
    {
        const bool branch_taken_0x3ec5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5C0u;
        // 0x3ec5c4: 0x1491023  subu        $v0, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec5c0) {
            ctx->pc = 0x3EC7BCu;
            goto label_3ec7bc;
        }
    }
    ctx->pc = 0x3EC5C8u;
    // 0x3ec5c8: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x3ec5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ec5cc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3ec5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3ec5d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3ec5d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3ec5d4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3ec5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ec5d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ec5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3ec5dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3ec5dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3ec5e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ec5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3ec5e4: 0x1223821  addu        $a3, $t1, $v0
    ctx->pc = 0x3ec5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3ec5e8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3ec5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ec5ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3ec5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ec5f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ec5f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec5f4: 0x0  nop
    ctx->pc = 0x3ec5f4u;
    // NOP
    // 0x3ec5f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC5F8u;
    {
        const bool branch_taken_0x3ec5f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC5F8u;
        // 0x3ec5fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec5f8) {
            ctx->pc = 0x3EC608u;
            goto label_3ec608;
        }
    }
    ctx->pc = 0x3EC600u;
    // 0x3ec600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3ec600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec604: 0x0  nop
    ctx->pc = 0x3ec604u;
    // NOP
label_3ec608:
    // 0x3ec608: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x3ec608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3ec60c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EC60Cu;
    {
        const bool branch_taken_0x3ec60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec60c) {
            ctx->pc = 0x3EC610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC60Cu;
            // 0x3ec610: 0x8d430000  lw          $v1, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC620u;
            goto label_3ec620;
        }
    }
    ctx->pc = 0x3EC614u;
    // 0x3ec614: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3ec614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3ec618: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x3ec618u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x3ec61c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x3ec61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_3ec620:
    // 0x3ec620: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x3ec620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ec624: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ec624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ec628: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3ec628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ec62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ec62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec630: 0x0  nop
    ctx->pc = 0x3ec630u;
    // NOP
    // 0x3ec634: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC634u;
    {
        const bool branch_taken_0x3ec634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC634u;
        // 0x3ec638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec634) {
            ctx->pc = 0x3EC640u;
            goto label_3ec640;
        }
    }
    ctx->pc = 0x3EC63Cu;
    // 0x3ec63c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec640:
    // 0x3ec640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ec640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ec644: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EC644u;
    {
        const bool branch_taken_0x3ec644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC644u;
        // 0x3ec648: 0x25260004  addiu       $a2, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec644) {
            ctx->pc = 0x3EC68Cu;
            goto label_3ec68c;
        }
    }
    ctx->pc = 0x3EC64Cu;
    // 0x3ec64c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3ec64cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3ec650: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x3ec650u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x3ec654: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x3ec654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ec658: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3ec658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ec65c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3ec65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ec660: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3ec660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ec664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ec664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec668: 0x0  nop
    ctx->pc = 0x3ec668u;
    // NOP
    // 0x3ec66c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC66Cu;
    {
        const bool branch_taken_0x3ec66c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC66Cu;
        // 0x3ec670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec66c) {
            ctx->pc = 0x3EC678u;
            goto label_3ec678;
        }
    }
    ctx->pc = 0x3EC674u;
    // 0x3ec674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec678:
    // 0x3ec678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ec678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ec67c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC67Cu;
    {
        const bool branch_taken_0x3ec67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC67Cu;
        // 0x3ec680: 0x25260004  addiu       $a2, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec67c) {
            ctx->pc = 0x3EC68Cu;
            goto label_3ec68c;
        }
    }
    ctx->pc = 0x3EC684u;
    // 0x3ec684: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3ec684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3ec688: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x3ec688u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_3ec68c:
    // 0x3ec68c: 0x2545fffc  addiu       $a1, $t2, -0x4
    ctx->pc = 0x3ec68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x3ec690: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x3ec690u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ec694: 0x0  nop
    ctx->pc = 0x3ec694u;
    // NOP
label_3ec698:
    // 0x3ec698: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3ec698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ec69c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ec69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ec6a0: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x3ec6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ec6a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ec6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ec6a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ec6a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec6ac: 0x0  nop
    ctx->pc = 0x3ec6acu;
    // NOP
    // 0x3ec6b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC6B0u;
    {
        const bool branch_taken_0x3ec6b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6B0u;
        // 0x3ec6b4: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6b0) {
            ctx->pc = 0x3EC6BCu;
            goto label_3ec6bc;
        }
    }
    ctx->pc = 0x3EC6B8u;
    // 0x3ec6b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ec6b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6bc:
    // 0x3ec6bc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3ec6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec6c0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x3EC6C0u;
    {
        const bool branch_taken_0x3ec6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec6c0) {
            ctx->pc = 0x3EC6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC6C0u;
            // 0x3ec6c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec698;
        }
    }
    ctx->pc = 0x3EC6C8u;
    // 0x3ec6c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC6C8u;
    {
        const bool branch_taken_0x3ec6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6C8u;
        // 0x3ec6cc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6c8) {
            ctx->pc = 0x3EC6D4u;
            goto label_3ec6d4;
        }
    }
    ctx->pc = 0x3EC6D0u;
label_3ec6d0:
    // 0x3ec6d0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3ec6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ec6d4:
    // 0x3ec6d4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3ec6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ec6d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ec6d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec6dc: 0x0  nop
    ctx->pc = 0x3ec6dcu;
    // NOP
    // 0x3ec6e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC6E0u;
    {
        const bool branch_taken_0x3ec6e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC6E0u;
        // 0x3ec6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec6e0) {
            ctx->pc = 0x3EC6ECu;
            goto label_3ec6ec;
        }
    }
    ctx->pc = 0x3EC6E8u;
    // 0x3ec6e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec6ec:
    // 0x3ec6ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3ec6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3ec6f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3EC6F0u;
    {
        const bool branch_taken_0x3ec6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec6f0) {
            ctx->pc = 0x3EC6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC6F0u;
            // 0x3ec6f4: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC6D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec6d0;
        }
    }
    ctx->pc = 0x3EC6F8u;
    // 0x3ec6f8: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x3ec6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3ec6fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3EC6FCu;
    {
        const bool branch_taken_0x3ec6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec6fc) {
            ctx->pc = 0x3EC72Cu;
            goto label_3ec72c;
        }
    }
    ctx->pc = 0x3EC704u;
    // 0x3ec704: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3ec704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3ec708: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC708u;
    {
        const bool branch_taken_0x3ec708 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x3EC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC708u;
        // 0x3ec70c: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec708) {
            ctx->pc = 0x3EC718u;
            goto label_3ec718;
        }
    }
    ctx->pc = 0x3EC710u;
    // 0x3ec710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC710u;
    {
        const bool branch_taken_0x3ec710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC710u;
        // 0x3ec714: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec710) {
            ctx->pc = 0x3EC720u;
            goto label_3ec720;
        }
    }
    ctx->pc = 0x3EC718u;
label_3ec718:
    // 0x3ec718: 0xe51026  xor         $v0, $a3, $a1
    ctx->pc = 0x3ec718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 5));
    // 0x3ec71c: 0xc2380a  movz        $a3, $a2, $v0
    ctx->pc = 0x3ec71cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 6));
label_3ec720:
    // 0x3ec720: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ec720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ec724: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC724u;
    {
        const bool branch_taken_0x3ec724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC724u;
        // 0x3ec728: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec724) {
            ctx->pc = 0x3EC734u;
            goto label_3ec734;
        }
    }
    ctx->pc = 0x3EC72Cu;
label_3ec72c:
    // 0x3ec72c: 0x50c50011  beql        $a2, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3EC72Cu;
    {
        const bool branch_taken_0x3ec72c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x3ec72c) {
            ctx->pc = 0x3EC730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC72Cu;
            // 0x3ec730: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC774u;
            goto label_3ec774;
        }
    }
    ctx->pc = 0x3EC734u;
label_3ec734:
    // 0x3ec734: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x3ec734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ec738: 0x5040ffd7  beql        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3EC738u;
    {
        const bool branch_taken_0x3ec738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec738) {
            ctx->pc = 0x3EC73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC738u;
            // 0x3ec73c: 0x8ce80000  lw          $t0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec698;
        }
    }
    ctx->pc = 0x3EC740u;
label_3ec740:
    // 0x3ec740: 0xa91023  subu        $v0, $a1, $t1
    ctx->pc = 0x3ec740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x3ec744: 0x23883  sra         $a3, $v0, 2
    ctx->pc = 0x3ec744u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3ec748: 0x28e30005  slti        $v1, $a3, 0x5
    ctx->pc = 0x3ec748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3ec74c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3EC74Cu;
    {
        const bool branch_taken_0x3ec74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC74Cu;
        // 0x3ec750: 0x1461023  subu        $v0, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec74c) {
            ctx->pc = 0x3EC77Cu;
            goto label_3ec77c;
        }
    }
    ctx->pc = 0x3EC754u;
    // 0x3ec754: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3ec754u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3ec758: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x3ec758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3ec75c: 0x1040ff97  beqz        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x3EC75Cu;
    {
        const bool branch_taken_0x3ec75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC75Cu;
        // 0x3ec760: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec75c) {
            ctx->pc = 0x3EC5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec5bc;
        }
    }
    ctx->pc = 0x3EC764u;
    // 0x3ec764: 0x256bfff8  addiu       $t3, $t3, -0x8
    ctx->pc = 0x3ec764u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
    // 0x3ec768: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x3ec768u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3ec76c: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x3EC76Cu;
    {
        const bool branch_taken_0x3ec76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC76Cu;
        // 0x3ec770: 0x8d6a0004  lw          $t2, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec76c) {
            ctx->pc = 0x3EC5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec5bc;
        }
    }
    ctx->pc = 0x3EC774u;
label_3ec774:
    // 0x3ec774: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x3EC774u;
    {
        const bool branch_taken_0x3ec774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC774u;
        // 0x3ec778: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec774) {
            ctx->pc = 0x3EC740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec740;
        }
    }
    ctx->pc = 0x3EC77Cu;
label_3ec77c:
    // 0x3ec77c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3ec77cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3ec780: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x3ec780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3ec784: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC784u;
    {
        const bool branch_taken_0x3ec784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC784u;
        // 0x3ec788: 0x47102a  slt         $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec784) {
            ctx->pc = 0x3EC794u;
            goto label_3ec794;
        }
    }
    ctx->pc = 0x3EC78Cu;
    // 0x3ec78c: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x3EC78Cu;
    {
        const bool branch_taken_0x3ec78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC78Cu;
        // 0x3ec790: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec78c) {
            ctx->pc = 0x3EC5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec5bc;
        }
    }
    ctx->pc = 0x3EC794u;
label_3ec794:
    // 0x3ec794: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC794u;
    {
        const bool branch_taken_0x3ec794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec794) {
            ctx->pc = 0x3EC798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC794u;
            // 0x3ec798: 0xad6a0004  sw          $t2, 0x4($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC7ACu;
            goto label_3ec7ac;
        }
    }
    ctx->pc = 0x3EC79Cu;
    // 0x3ec79c: 0xad690000  sw          $t1, 0x0($t3)
    ctx->pc = 0x3ec79cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 9));
    // 0x3ec7a0: 0xad650004  sw          $a1, 0x4($t3)
    ctx->pc = 0x3ec7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
    // 0x3ec7a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3EC7A4u;
    {
        const bool branch_taken_0x3ec7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7A4u;
        // 0x3ec7a8: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec7a4) {
            ctx->pc = 0x3EC7B4u;
            goto label_3ec7b4;
        }
    }
    ctx->pc = 0x3EC7ACu;
label_3ec7ac:
    // 0x3ec7ac: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x3ec7acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x3ec7b0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3ec7b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ec7b4:
    // 0x3ec7b4: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x3EC7B4u;
    {
        const bool branch_taken_0x3ec7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7B4u;
        // 0x3ec7b8: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec7b4) {
            ctx->pc = 0x3EC5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec5bc;
        }
    }
    ctx->pc = 0x3EC7BCu;
label_3ec7bc:
    // 0x3ec7bc: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x3ec7bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3ec7c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ec7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec7c4: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x3ec7c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3ec7c8: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x3ec7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3ec7cc: 0x1a2400b  movn        $t0, $t5, $v0
    ctx->pc = 0x3ec7ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 13));
    // 0x3ec7d0: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x3ec7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ec7d4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3EC7D4u;
    {
        const bool branch_taken_0x3ec7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7D4u;
        // 0x3ec7d8: 0x24a90008  addiu       $t1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec7d4) {
            ctx->pc = 0x3EC814u;
            goto label_3ec814;
        }
    }
    ctx->pc = 0x3EC7DCu;
    // 0x3ec7dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3ec7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3ec7e0:
    // 0x3ec7e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ec7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ec7e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3ec7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ec7e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ec7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ec7ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ec7ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec7f0: 0x0  nop
    ctx->pc = 0x3ec7f0u;
    // NOP
    // 0x3ec7f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC7F4u;
    {
        const bool branch_taken_0x3ec7f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC7F4u;
        // 0x3ec7f8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec7f4) {
            ctx->pc = 0x3EC800u;
            goto label_3ec800;
        }
    }
    ctx->pc = 0x3EC7FCu;
    // 0x3ec7fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ec7fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec800:
    // 0x3ec800: 0xc7280b  movn        $a1, $a2, $a3
    ctx->pc = 0x3ec800u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x3ec804: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3ec804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ec808: 0x106102b  sltu        $v0, $t0, $a2
    ctx->pc = 0x3ec808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ec80c: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3EC80Cu;
    {
        const bool branch_taken_0x3ec80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec80c) {
            ctx->pc = 0x3EC810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC80Cu;
            // 0x3ec810: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec7e0;
        }
    }
    ctx->pc = 0x3EC814u;
label_3ec814:
    // 0x3ec814: 0x10a40005  beq         $a1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EC814u;
    {
        const bool branch_taken_0x3ec814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3EC818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC814u;
        // 0x3ec818: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec814) {
            ctx->pc = 0x3EC82Cu;
            goto label_3ec82c;
        }
    }
    ctx->pc = 0x3EC81Cu;
    // 0x3ec81c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ec81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ec820: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3ec820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ec824: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3ec824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3ec828: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3ec828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3ec82c:
    // 0x3ec82c: 0x1a6102b  sltu        $v0, $t5, $a2
    ctx->pc = 0x3ec82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ec830: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3EC830u;
    {
        const bool branch_taken_0x3ec830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec830) {
            ctx->pc = 0x3EC8C4u;
            goto label_3ec8c4;
        }
    }
    ctx->pc = 0x3EC838u;
    // 0x3ec838: 0x24c5fffc  addiu       $a1, $a2, -0x4
    ctx->pc = 0x3ec838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x3ec83c: 0x0  nop
    ctx->pc = 0x3ec83cu;
    // NOP
label_3ec840:
    // 0x3ec840: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3ec840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3ec844: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x3ec844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3ec848: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3ec848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ec84c:
    // 0x3ec84c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ec84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ec850: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3ec850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ec854: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ec854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ec858: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3ec858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3ec85c: 0x0  nop
    ctx->pc = 0x3ec85cu;
    // NOP
    // 0x3ec860: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3EC860u;
    {
        const bool branch_taken_0x3ec860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC860u;
        // 0x3ec864: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec860) {
            ctx->pc = 0x3EC86Cu;
            goto label_3ec86c;
        }
    }
    ctx->pc = 0x3EC868u;
    // 0x3ec868: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ec868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec86c:
    // 0x3ec86c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3ec86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3ec870: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x3EC870u;
    {
        const bool branch_taken_0x3ec870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec870) {
            ctx->pc = 0x3EC874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC870u;
            // 0x3ec874: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec84c;
        }
    }
    ctx->pc = 0x3EC878u;
    // 0x3ec878: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3ec878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3ec87c: 0x50a6000e  beql        $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3EC87Cu;
    {
        const bool branch_taken_0x3ec87c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x3ec87c) {
            ctx->pc = 0x3EC880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC87Cu;
            // 0x3ec880: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC8B8u;
            goto label_3ec8b8;
        }
    }
    ctx->pc = 0x3EC884u;
    // 0x3ec884: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3ec884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec888: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x3ec888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3ec88c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EC88Cu;
    {
        const bool branch_taken_0x3ec88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC88Cu;
        // 0x3ec890: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec88c) {
            ctx->pc = 0x3EC8B0u;
            goto label_3ec8b0;
        }
    }
    ctx->pc = 0x3EC894u;
    // 0x3ec894: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3ec894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3ec898:
    // 0x3ec898: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x3ec898u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x3ec89c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x3ec89cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec8a0: 0x2549fffc  addiu       $t1, $t2, -0x4
    ctx->pc = 0x3ec8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x3ec8a4: 0x125102b  sltu        $v0, $t1, $a1
    ctx->pc = 0x3ec8a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3ec8a8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EC8A8u;
    {
        const bool branch_taken_0x3ec8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec8a8) {
            ctx->pc = 0x3EC8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC8A8u;
            // 0x3ec8ac: 0x8d220000  lw          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec898;
        }
    }
    ctx->pc = 0x3EC8B0u;
label_3ec8b0:
    // 0x3ec8b0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x3ec8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x3ec8b4: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x3ec8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ec8b8:
    // 0x3ec8b8: 0x1a6102b  sltu        $v0, $t5, $a2
    ctx->pc = 0x3ec8b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3ec8bc: 0x5040ffe0  beql        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3EC8BCu;
    {
        const bool branch_taken_0x3ec8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec8bc) {
            ctx->pc = 0x3EC8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EC8BCu;
            // 0x3ec8c0: 0x24c5fffc  addiu       $a1, $a2, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EC840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ec840;
        }
    }
    ctx->pc = 0x3EC8C4u;
label_3ec8c4:
    // 0x3ec8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC8C4u;
        // 0x3ec8c8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC8CCu;
    // 0x3ec8cc: 0x0  nop
    ctx->pc = 0x3ec8ccu;
    // NOP
    ctx->pc = 0x3ec8d0u;
}
