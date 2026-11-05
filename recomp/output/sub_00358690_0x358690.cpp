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

// Function: sub_00358690
// Address: 0x358690 - 0x358918
void sub_00358690_0x358690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358690_0x358690");
#endif

    switch (ctx->pc) {
        case 0x3586d8u: goto label_3586d8;
        case 0x358708u: goto label_358708;
        case 0x358738u: goto label_358738;
        case 0x358790u: goto label_358790;
        case 0x358810u: goto label_358810;
        case 0x358830u: goto label_358830;
        case 0x3588b8u: goto label_3588b8;
        case 0x3588e4u: goto label_3588e4;
        default: break;
    }

    ctx->pc = 0x358690u;

    // 0x358690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x358690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x358694: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x358694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x358698: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x358698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x35869c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x35869cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3586a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586a4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3586a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3586a8: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x3586a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
    // 0x3586ac: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x3586acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x3586b0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3586b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x3586b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3586b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3586b8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3586b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3586bc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x3586bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3586c0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3586c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3586c4: 0x27b00018  addiu       $s0, $sp, 0x18
    ctx->pc = 0x3586c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x3586c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3586c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3586cc: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3586ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3586d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3586d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3586d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3586d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3586d8:
    // 0x3586d8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3586d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3586dc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3586dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3586e0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x3586e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3586e4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3586e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3586e8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3586e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3586ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3586ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3586f0: 0x14440031  bne         $v0, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3586F0u;
    {
        const bool branch_taken_0x3586f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3586F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586F0u;
        // 0x3586f4: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3586f0) {
            ctx->pc = 0x3587B8u;
            goto label_3587b8;
        }
    }
    ctx->pc = 0x3586F8u;
    // 0x3586f8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3586F8u;
    {
        const bool branch_taken_0x3586f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3586FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3586F8u;
        // 0x3586fc: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3586f8) {
            ctx->pc = 0x3586D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3586d8;
        }
    }
    ctx->pc = 0x358700u;
    // 0x358700: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x358700u;
    {
        const bool branch_taken_0x358700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358700u;
        // 0x358704: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358700) {
            ctx->pc = 0x3587BCu;
            goto label_3587bc;
        }
    }
    ctx->pc = 0x358708u;
label_358708:
    // 0x358708: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x358708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35870c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35870cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x358710: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x358710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358714: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x358714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x358718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35871c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x35871cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x358720: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x358720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x358724: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x358724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358728: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x358728u;
    {
        const bool branch_taken_0x358728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358728u;
        // 0x35872c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358728) {
            ctx->pc = 0x35873Cu;
            goto label_35873c;
        }
    }
    ctx->pc = 0x358730u;
    // 0x358730: 0xc0d5f52  jal         func_357D48
    ctx->pc = 0x358730u;
    SET_GPR_U32(ctx, 31, 0x358738u);
    ctx->pc = 0x358734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358730u;
    // 0x358734: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357D48u, 0x358730u, 0x358738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358738u;
label_358738:
    // 0x358738: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x358738u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35873c:
    // 0x35873c: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x35873cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x358740: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x358740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x358744: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x358744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x358748: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x358748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35874c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358750: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x358750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358754: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x358754u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x358758: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x358758u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x35875c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x358760: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x358760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x358764: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x358764u;
    {
        const bool branch_taken_0x358764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358764u;
        // 0x358768: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358764) {
            ctx->pc = 0x358778u;
            goto label_358778;
        }
    }
    ctx->pc = 0x35876Cu;
    // 0x35876c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x35876cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x358770: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x358770u;
    {
        const bool branch_taken_0x358770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358770u;
        // 0x358774: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358770) {
            ctx->pc = 0x3587B8u;
            goto label_3587b8;
        }
    }
    ctx->pc = 0x358778u;
label_358778:
    // 0x358778: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x358778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35877c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x358780: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x358780u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x358784: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x358784u;
    {
        const bool branch_taken_0x358784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358784u;
        // 0x358788: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358784) {
            ctx->pc = 0x3587B8u;
            goto label_3587b8;
        }
    }
    ctx->pc = 0x35878Cu;
    // 0x35878c: 0x0  nop
    ctx->pc = 0x35878cu;
    // NOP
label_358790:
    // 0x358790: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x358790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x358794: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x358794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x358798: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x358798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35879c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x35879cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3587a0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x3587a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3587a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3587a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3587a8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3587A8u;
    {
        const bool branch_taken_0x3587a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3587ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587A8u;
        // 0x3587ac: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587a8) {
            ctx->pc = 0x3587B8u;
            goto label_3587b8;
        }
    }
    ctx->pc = 0x3587B0u;
    // 0x3587b0: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3587B0u;
    {
        const bool branch_taken_0x3587b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3587B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587B0u;
        // 0x3587b4: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587b0) {
            ctx->pc = 0x358790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358790;
        }
    }
    ctx->pc = 0x3587B8u;
label_3587b8:
    // 0x3587b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3587b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3587bc:
    // 0x3587bc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3587BCu;
    {
        const bool branch_taken_0x3587bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587BCu;
        // 0x3587c0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587bc) {
            ctx->pc = 0x3587F4u;
            goto label_3587f4;
        }
    }
    ctx->pc = 0x3587C4u;
    // 0x3587c4: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x3587c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3587c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3587C8u;
    {
        const bool branch_taken_0x3587c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587C8u;
        // 0x3587cc: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587c8) {
            ctx->pc = 0x3587F4u;
            goto label_3587f4;
        }
    }
    ctx->pc = 0x3587D0u;
    // 0x3587d0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3587d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3587d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3587d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3587d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3587d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3587dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3587dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3587e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3587e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3587e4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3587e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3587e8: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x3587e8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3587ec: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3587ECu;
    {
        const bool branch_taken_0x3587ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3587F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587ECu;
        // 0x3587f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587ec) {
            ctx->pc = 0x3587F8u;
            goto label_3587f8;
        }
    }
    ctx->pc = 0x3587F4u;
label_3587f4:
    // 0x3587f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3587f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3587f8:
    // 0x3587f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3587f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3587fc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3587FCu;
    {
        const bool branch_taken_0x3587fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3587FCu;
        // 0x358800: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587fc) {
            ctx->pc = 0x358708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358708;
        }
    }
    ctx->pc = 0x358804u;
    // 0x358804: 0x2632d3c0  addiu       $s2, $s1, -0x2C40
    ctx->pc = 0x358804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955968));
    // 0x358808: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x358808u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35880c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x35880cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_358810:
    // 0x358810: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x358810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x358814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358818: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x358818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35881c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x35881cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358820: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x358820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358824: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x358824u;
    {
        const bool branch_taken_0x358824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x358828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358824u;
        // 0x358828: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358824) {
            ctx->pc = 0x358848u;
            goto label_358848;
        }
    }
    ctx->pc = 0x35882Cu;
    // 0x35882c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x35882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_358830:
    // 0x358830: 0x0  nop
    ctx->pc = 0x358830u;
    // NOP
    // 0x358834: 0x0  nop
    ctx->pc = 0x358834u;
    // NOP
    // 0x358838: 0x0  nop
    ctx->pc = 0x358838u;
    // NOP
    // 0x35883c: 0x0  nop
    ctx->pc = 0x35883cu;
    // NOP
    // 0x358840: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x358840u;
    {
        const bool branch_taken_0x358840 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x358844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358840u;
        // 0x358844: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358840) {
            ctx->pc = 0x358830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358830;
        }
    }
    ctx->pc = 0x358848u;
label_358848:
    // 0x358848: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x358848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x35884c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x35884cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x358850: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x358850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x358854: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x358854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x358858: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x358858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x35885c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358860: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x358860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x358864: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x358864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358868: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x358868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x35886c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x35886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x358870: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x358870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x358874: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x358874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x358878: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x358878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35887c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x35887cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x358880: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x358880u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x358884: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x358884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x358888: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x358888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35888c: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x35888cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358890: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x358890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x358894: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x358894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x358898: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x358898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35889c: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x35889cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3588a0: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x3588a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3588a4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3588a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3588a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3588a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3588ac: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3588ACu;
    {
        const bool branch_taken_0x3588ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3588ac) {
            ctx->pc = 0x3588B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3588ACu;
            // 0x3588b0: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3588D4u;
            goto label_3588d4;
        }
    }
    ctx->pc = 0x3588B4u;
    // 0x3588b4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3588b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3588b8:
    // 0x3588b8: 0x0  nop
    ctx->pc = 0x3588b8u;
    // NOP
    // 0x3588bc: 0x0  nop
    ctx->pc = 0x3588bcu;
    // NOP
    // 0x3588c0: 0x0  nop
    ctx->pc = 0x3588c0u;
    // NOP
    // 0x3588c4: 0x0  nop
    ctx->pc = 0x3588c4u;
    // NOP
    // 0x3588c8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3588C8u;
    {
        const bool branch_taken_0x3588c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3588CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588C8u;
        // 0x3588cc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588c8) {
            ctx->pc = 0x3588B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3588b8;
        }
    }
    ctx->pc = 0x3588D0u;
    // 0x3588d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3588d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3588d4:
    // 0x3588d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3588D4u;
    {
        const bool branch_taken_0x3588d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3588D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3588D4u;
        // 0x3588d8: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588d4) {
            ctx->pc = 0x3588E8u;
            goto label_3588e8;
        }
    }
    ctx->pc = 0x3588DCu;
    // 0x3588dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3588DCu;
    SET_GPR_U32(ctx, 31, 0x3588E4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3588DCu, 0x3588E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3588E4u;
label_3588e4:
    // 0x3588e4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3588e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3588e8:
    // 0x3588e8: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x3588e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3588ec: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x3588ECu;
    {
        const bool branch_taken_0x3588ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3588ec) {
            ctx->pc = 0x3588F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3588ECu;
            // 0x3588f0: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358810;
        }
    }
    ctx->pc = 0x3588F4u;
    // 0x3588f4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3588f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3588f8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3588f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3588fc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3588fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x358900: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x358900u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x358904: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x358904u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x358908: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x358908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35890c: 0x3e00008  jr          $ra
    ctx->pc = 0x35890Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35890Cu;
        // 0x358910: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35890Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358914u;
    // 0x358914: 0x0  nop
    ctx->pc = 0x358914u;
    // NOP
    ctx->pc = 0x358918u;
}
