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

// Function: sub_0014D4B8
// Address: 0x14d4b8 - 0x14d7d0
void sub_0014D4B8_0x14d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D4B8_0x14d4b8");
#endif

    switch (ctx->pc) {
        case 0x14d5a4u: goto label_14d5a4;
        case 0x14d62cu: goto label_14d62c;
        case 0x14d658u: goto label_14d658;
        case 0x14d6c0u: goto label_14d6c0;
        case 0x14d754u: goto label_14d754;
        case 0x14d76cu: goto label_14d76c;
        case 0x14d77cu: goto label_14d77c;
        case 0x14d78cu: goto label_14d78c;
        case 0x14d7a0u: goto label_14d7a0;
        default: break;
    }

    ctx->pc = 0x14d4b8u;

    // 0x14d4b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14d4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14d4bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14d4c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14d4c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d4c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14d4cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14d4d0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x14d4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14d4d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x14d4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x14d4d8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x14d4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x14d4dc: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x14d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x14d4e0: 0x8e020568  lw          $v0, 0x568($s0)
    ctx->pc = 0x14d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x14d4e4: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x14D4E4u;
    {
        const bool branch_taken_0x14d4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4E4u;
        // 0x14d4e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4e4) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D4ECu;
    // 0x14d4ec: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14d4ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x14d4f0: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x14D4F0u;
    {
        const bool branch_taken_0x14d4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d4f0) {
            ctx->pc = 0x14D4F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D4F0u;
            // 0x14d4f4: 0x8e020560  lw          $v0, 0x560($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D5D8u;
            goto label_14d5d8;
        }
    }
    ctx->pc = 0x14D4F8u;
    // 0x14d4f8: 0x10a000a9  beqz        $a1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x14D4F8u;
    {
        const bool branch_taken_0x14d4f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4F8u;
        // 0x14d4fc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4f8) {
            ctx->pc = 0x14D7A0u;
            goto label_14d7a0;
        }
    }
    ctx->pc = 0x14D500u;
    // 0x14d500: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14d500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14d504: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14d504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d508: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14d50c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d510: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14d514: 0x504000a3  beql        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x14D514u;
    {
        const bool branch_taken_0x14d514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d514) {
            ctx->pc = 0x14D518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D514u;
            // 0x14d518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D51Cu;
    // 0x14d51c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14d520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d524: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14d524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d528: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x14d52c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D52Cu;
    {
        const bool branch_taken_0x14d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d52c) {
            ctx->pc = 0x14D530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D52Cu;
            // 0x14d530: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D53Cu;
            goto label_14d53c;
        }
    }
    ctx->pc = 0x14D534u;
    // 0x14d534: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D534u;
    {
        const bool branch_taken_0x14d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D534u;
        // 0x14d538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d534) {
            ctx->pc = 0x14D544u;
            goto label_14d544;
        }
    }
    ctx->pc = 0x14D53Cu;
label_14d53c:
    // 0x14d53c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d540: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x14d540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14d544:
    // 0x14d544: 0x10a00097  beqz        $a1, . + 4 + (0x97 << 2)
    ctx->pc = 0x14D544u;
    {
        const bool branch_taken_0x14d544 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D544u;
        // 0x14d548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d544) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D54Cu;
    // 0x14d54c: 0x8e020560  lw          $v0, 0x560($s0)
    ctx->pc = 0x14d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x14d550: 0x24839a08  addiu       $v1, $a0, -0x65F8
    ctx->pc = 0x14d550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x14d554: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d558: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d55c: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x14d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14d560: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D560u;
    {
        const bool branch_taken_0x14d560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d560) {
            ctx->pc = 0x14D564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D560u;
            // 0x14d564: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D570u;
            goto label_14d570;
        }
    }
    ctx->pc = 0x14D568u;
    // 0x14d568: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x14D568u;
    {
        const bool branch_taken_0x14d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D568u;
        // 0x14d56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d568) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D570u;
label_14d570:
    // 0x14d570: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d574: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14d574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d578: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x14d57c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D57Cu;
    {
        const bool branch_taken_0x14d57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d57c) {
            ctx->pc = 0x14D580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D57Cu;
            // 0x14d580: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D58Cu;
            goto label_14d58c;
        }
    }
    ctx->pc = 0x14D584u;
    // 0x14d584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D584u;
    {
        const bool branch_taken_0x14d584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D584u;
        // 0x14d588: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d584) {
            ctx->pc = 0x14D594u;
            goto label_14d594;
        }
    }
    ctx->pc = 0x14D58Cu;
label_14d58c:
    // 0x14d58c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14d58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d590: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x14d590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14d594:
    // 0x14d594: 0x10c00083  beqz        $a2, . + 4 + (0x83 << 2)
    ctx->pc = 0x14D594u;
    {
        const bool branch_taken_0x14d594 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D594u;
        // 0x14d598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d594) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D59Cu;
    // 0x14d59c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14D59Cu;
    SET_GPR_U32(ctx, 31, 0x14D5A4u);
    ctx->pc = 0x14D5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D59Cu;
    // 0x14d5a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14D59Cu, 0x14D5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D5A4u;
label_14d5a4:
    // 0x14d5a4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x14d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d5a8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x14d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d5ac: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x14d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14d5b0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14d5b0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14d5b4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14d5b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14d5b8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14d5b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14d5bc: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x14d5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d5c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d5c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d5c4: 0x0  nop
    ctx->pc = 0x14d5c4u;
    // NOP
    // 0x14d5c8: 0x45010076  bc1t        . + 4 + (0x76 << 2)
    ctx->pc = 0x14D5C8u;
    {
        const bool branch_taken_0x14d5c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5C8u;
        // 0x14d5cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5c8) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D5D0u;
    // 0x14d5d0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x14D5D0u;
    {
        const bool branch_taken_0x14d5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D5D0u;
        // 0x14d5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d5d0) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D5D8u;
label_14d5d8:
    // 0x14d5d8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14d5dc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x14d5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14d5e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d5e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d5e8: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x14d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x14d5ec: 0x5040006d  beql        $v0, $zero, . + 4 + (0x6D << 2)
    ctx->pc = 0x14D5ECu;
    {
        const bool branch_taken_0x14d5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d5ec) {
            ctx->pc = 0x14D5F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D5ECu;
            // 0x14d5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D5F4u;
    // 0x14d5f4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14d5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d5fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14d600: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x14d600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x14d604: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D604u;
    {
        const bool branch_taken_0x14d604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d604) {
            ctx->pc = 0x14D608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D604u;
            // 0x14d608: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D614u;
            goto label_14d614;
        }
    }
    ctx->pc = 0x14D60Cu;
    // 0x14d60c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D60Cu;
    {
        const bool branch_taken_0x14d60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D60Cu;
        // 0x14d610: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d60c) {
            ctx->pc = 0x14D61Cu;
            goto label_14d61c;
        }
    }
    ctx->pc = 0x14D614u;
label_14d614:
    // 0x14d614: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14d614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d618: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x14d618u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14d61c:
    // 0x14d61c: 0x56800005  bnel        $s4, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D61Cu;
    {
        const bool branch_taken_0x14d61c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d61c) {
            ctx->pc = 0x14D620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D61Cu;
            // 0x14d620: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D634u;
            goto label_14d634;
        }
    }
    ctx->pc = 0x14D624u;
    // 0x14d624: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x14D624u;
    {
        const bool branch_taken_0x14d624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D624u;
        // 0x14d628: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d624) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D62Cu;
label_14d62c:
    // 0x14d62c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x14D62Cu;
    {
        const bool branch_taken_0x14d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D62Cu;
        // 0x14d630: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d62c) {
            ctx->pc = 0x14D73Cu;
            goto label_14d73c;
        }
    }
    ctx->pc = 0x14D634u;
label_14d634:
    // 0x14d634: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14d634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d638: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14d638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d63c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x14D63Cu;
    {
        const bool branch_taken_0x14d63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D63Cu;
        // 0x14d640: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d63c) {
            ctx->pc = 0x14D73Cu;
            goto label_14d73c;
        }
    }
    ctx->pc = 0x14D644u;
    // 0x14d644: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x14d644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14d648: 0x24539b10  addiu       $s3, $v0, -0x64F0
    ctx->pc = 0x14d648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x14d64c: 0x26760104  addiu       $s6, $s3, 0x104
    ctx->pc = 0x14d64cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 260));
    // 0x14d650: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14d650u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14d654: 0x0  nop
    ctx->pc = 0x14d654u;
    // NOP
label_14d658:
    // 0x14d658: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14d658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14d65c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d65cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d668: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x14D668u;
    {
        const bool branch_taken_0x14d668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D668u;
        // 0x14d66c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d668) {
            ctx->pc = 0x14D718u;
            goto label_14d718;
        }
    }
    ctx->pc = 0x14D670u;
    // 0x14d670: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x14d670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x14d674: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14d674u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d678: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x14d678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x14d67c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d680: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x14D680u;
    {
        const bool branch_taken_0x14d680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D680u;
        // 0x14d684: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d680) {
            ctx->pc = 0x14D718u;
            goto label_14d718;
        }
    }
    ctx->pc = 0x14D688u;
    // 0x14d688: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x14d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14d68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d690: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x14d690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x14d694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d698: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D698u;
    {
        const bool branch_taken_0x14d698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d698) {
            ctx->pc = 0x14D69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D698u;
            // 0x14d69c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D6A8u;
            goto label_14d6a8;
        }
    }
    ctx->pc = 0x14D6A0u;
    // 0x14d6a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14D6A0u;
    {
        const bool branch_taken_0x14d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6A0u;
        // 0x14d6a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6a0) {
            ctx->pc = 0x14D6B0u;
            goto label_14d6b0;
        }
    }
    ctx->pc = 0x14D6A8u;
label_14d6a8:
    // 0x14d6a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14d6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d6ac: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x14d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14d6b0:
    // 0x14d6b0: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14D6B0u;
    {
        const bool branch_taken_0x14d6b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6B0u;
        // 0x14d6b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6b0) {
            ctx->pc = 0x14D718u;
            goto label_14d718;
        }
    }
    ctx->pc = 0x14D6B8u;
    // 0x14d6b8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x14D6B8u;
    SET_GPR_U32(ctx, 31, 0x14D6C0u);
    ctx->pc = 0x14D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6B8u;
    // 0x14d6bc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x14D6B8u, 0x14D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D6C0u;
label_14d6c0:
    // 0x14d6c0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x14d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d6c4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x14d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d6c8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x14d6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14d6cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x14d6ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x14d6d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x14d6d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14d6d4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14d6d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14d6d8: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x14d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d6dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14d6dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d6e0: 0x0  nop
    ctx->pc = 0x14d6e0u;
    // NOP
    // 0x14d6e4: 0x4501ffd1  bc1t        . + 4 + (-0x2F << 2)
    ctx->pc = 0x14D6E4u;
    {
        const bool branch_taken_0x14d6e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D6E4u;
        // 0x14d6e8: 0x2331021  addu        $v0, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d6e4) {
            ctx->pc = 0x14D62Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d62c;
        }
    }
    ctx->pc = 0x14D6ECu;
    // 0x14d6ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d6f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14D6F0u;
    {
        const bool branch_taken_0x14d6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d6f0) {
            ctx->pc = 0x14D6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D6F0u;
            // 0x14d6f4: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D71Cu;
            goto label_14d71c;
        }
    }
    ctx->pc = 0x14D6F8u;
    // 0x14d6f8: 0x8c420ff8  lw          $v0, 0xFF8($v0)
    ctx->pc = 0x14d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x14d6fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d700: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x14d700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x14d704: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D704u;
    {
        const bool branch_taken_0x14d704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d704) {
            ctx->pc = 0x14D708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D704u;
            // 0x14d708: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D71Cu;
            goto label_14d71c;
        }
    }
    ctx->pc = 0x14D70Cu;
    // 0x14d70c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x14d70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x14d710: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14D710u;
    {
        const bool branch_taken_0x14d710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d710) {
            ctx->pc = 0x14D714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D710u;
            // 0x14d714: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D73Cu;
            goto label_14d73c;
        }
    }
    ctx->pc = 0x14D718u;
label_14d718:
    // 0x14d718: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14d718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14d71c:
    // 0x14d71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14d720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14d720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d724: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x14d724u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x14d728: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D728u;
        // 0x14d72c: 0xa202046c  sb          $v0, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D73Cu;
            goto label_14d73c;
        }
    }
    ctx->pc = 0x14D730u;
    // 0x14d730: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14d730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x14d734: 0x5642ffc8  bnel        $s2, $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x14D734u;
    {
        const bool branch_taken_0x14d734 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x14d734) {
            ctx->pc = 0x14D738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D734u;
            // 0x14d738: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d658;
        }
    }
    ctx->pc = 0x14D73Cu;
label_14d73c:
    // 0x14d73c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D73Cu;
    {
        const bool branch_taken_0x14d73c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d73c) {
            ctx->pc = 0x14D74Cu;
            goto label_14d74c;
        }
    }
    ctx->pc = 0x14D744u;
    // 0x14d744: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x14D744u;
    {
        const bool branch_taken_0x14d744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D744u;
        // 0x14d748: 0xae00056c  sw          $zero, 0x56C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d744) {
            ctx->pc = 0x14D7A0u;
            goto label_14d7a0;
        }
    }
    ctx->pc = 0x14D74Cu;
label_14d74c:
    // 0x14d74c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14D74Cu;
    SET_GPR_U32(ctx, 31, 0x14D754u);
    ctx->pc = 0x14D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D74Cu;
    // 0x14d750: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14D74Cu, 0x14D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D754u;
label_14d754:
    // 0x14d754: 0x8e05056c  lw          $a1, 0x56C($s0)
    ctx->pc = 0x14d754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1388)));
    // 0x14d758: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D758u;
    {
        const bool branch_taken_0x14d758 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14d758) {
            ctx->pc = 0x14D774u;
            goto label_14d774;
        }
    }
    ctx->pc = 0x14D760u;
    // 0x14d760: 0x8e050568  lw          $a1, 0x568($s0)
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x14d764: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14D764u;
    SET_GPR_U32(ctx, 31, 0x14D76Cu);
    ctx->pc = 0x14D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D764u;
    // 0x14d768: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14D764u, 0x14D76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D76Cu;
label_14d76c:
    // 0x14d76c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14D76Cu;
    {
        const bool branch_taken_0x14d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D76Cu;
        // 0x14d770: 0xae02056c  sw          $v0, 0x56C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d76c) {
            ctx->pc = 0x14D794u;
            goto label_14d794;
        }
    }
    ctx->pc = 0x14D774u;
label_14d774:
    // 0x14d774: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14D774u;
    SET_GPR_U32(ctx, 31, 0x14D77Cu);
    ctx->pc = 0x14D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D774u;
    // 0x14d778: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14D774u, 0x14D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D77Cu;
label_14d77c:
    // 0x14d77c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14D77Cu;
    {
        const bool branch_taken_0x14d77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D77Cu;
        // 0x14d780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d77c) {
            ctx->pc = 0x14D794u;
            goto label_14d794;
        }
    }
    ctx->pc = 0x14D784u;
    // 0x14d784: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14D784u;
    SET_GPR_U32(ctx, 31, 0x14D78Cu);
    ctx->pc = 0x14D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D784u;
    // 0x14d788: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14D784u, 0x14D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D78Cu;
label_14d78c:
    // 0x14d78c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14D78Cu;
    {
        const bool branch_taken_0x14d78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D78Cu;
        // 0x14d790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d78c) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D794u;
label_14d794:
    // 0x14d794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14d794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d798: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14D798u;
    SET_GPR_U32(ctx, 31, 0x14D7A0u);
    ctx->pc = 0x14D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D798u;
    // 0x14d79c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14D798u, 0x14D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7A0u;
label_14d7a0:
    // 0x14d7a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d7a4:
    // 0x14d7a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14d7a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d7a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14d7a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14d7ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14d7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d7b0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14d7b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d7b4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x14d7b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d7b8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x14d7b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14d7bc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x14d7bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d7c0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x14d7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14D7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7C4u;
        // 0x14d7c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D7CCu;
    // 0x14d7cc: 0x0  nop
    ctx->pc = 0x14d7ccu;
    // NOP
    ctx->pc = 0x14d7d0u;
}
