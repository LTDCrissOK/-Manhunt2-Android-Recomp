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

// Function: sub_003C8650
// Address: 0x3c8650 - 0x3c8d80
void sub_003C8650_0x3c8650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C8650_0x3c8650");
#endif

    switch (ctx->pc) {
        case 0x3c8698u: goto label_3c8698;
        case 0x3c8788u: goto label_3c8788;
        case 0x3c89e0u: goto label_3c89e0;
        case 0x3c8a68u: goto label_3c8a68;
        case 0x3c8a90u: goto label_3c8a90;
        case 0x3c8aa0u: goto label_3c8aa0;
        case 0x3c8ab8u: goto label_3c8ab8;
        case 0x3c8b28u: goto label_3c8b28;
        case 0x3c8b40u: goto label_3c8b40;
        case 0x3c8b68u: goto label_3c8b68;
        case 0x3c8c1cu: goto label_3c8c1c;
        case 0x3c8c84u: goto label_3c8c84;
        case 0x3c8d5cu: goto label_3c8d5c;
        default: break;
    }

    ctx->pc = 0x3c8650u;

    // 0x3c8650: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c8650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c8654: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x3c8654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x3c8658: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c8658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c865c: 0x2ca2001f  sltiu       $v0, $a1, 0x1F
    ctx->pc = 0x3c865cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x3c8660: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c8660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c8664: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c8664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8668: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c8668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c866c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c8670: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c8670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c8674: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8674u;
    {
        const bool branch_taken_0x3c8674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8674u;
        // 0x3c8678: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8674) {
            ctx->pc = 0x3C868Cu;
            goto label_3c868c;
        }
    }
    ctx->pc = 0x3C867Cu;
    // 0x3c867c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c867cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8680: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3c8680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x3c8684: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C8684u;
    {
        const bool branch_taken_0x3c8684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8684u;
        // 0x3c8688: 0xa28824  and         $s1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8684) {
            ctx->pc = 0x3C8690u;
            goto label_3c8690;
        }
    }
    ctx->pc = 0x3C868Cu;
label_3c868c:
    // 0x3c868c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x3c868cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c8690:
    // 0x3c8690: 0xc0f2538  jal         func_3C94E0
    ctx->pc = 0x3C8690u;
    SET_GPR_U32(ctx, 31, 0x3C8698u);
    ctx->pc = 0x3C8694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8690u;
    // 0x3c8694: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C94E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C94E0u, 0x3C8690u, 0x3C8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8698u;
label_3c8698:
    // 0x3c8698: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x3c8698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x3c869c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C869Cu;
    {
        const bool branch_taken_0x3c869c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C86A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C869Cu;
        // 0x3c86a0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c869c) {
            ctx->pc = 0x3C86F8u;
            goto label_3c86f8;
        }
    }
    ctx->pc = 0x3C86A4u;
    // 0x3c86a4: 0x1150c2  srl         $t2, $s1, 3
    ctx->pc = 0x3c86a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
    // 0x3c86a8: 0x2443d180  addiu       $v1, $v0, -0x2E80
    ctx->pc = 0x3c86a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
    // 0x3c86ac: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x3c86acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3c86b0: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x3c86b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x3c86b4: 0x1209000e  beq         $s0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C86B4u;
    {
        const bool branch_taken_0x3c86b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x3C86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86B4u;
        // 0x3c86b8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86b4) {
            ctx->pc = 0x3C86F0u;
            goto label_3c86f0;
        }
    }
    ctx->pc = 0x3C86BCu;
    // 0x3c86bc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3c86bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c86c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c86c4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3c86c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c86c8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3c86c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3c86cc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3c86ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c86d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c86d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c86d4: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3c86d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3c86d8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3c86d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x3c86dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x3c86dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3c86e0: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x3c86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3c86e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c86e8: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x3C86E8u;
    {
        const bool branch_taken_0x3c86e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C86ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86E8u;
        // 0x3c86ec: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86e8) {
            ctx->pc = 0x3C8D50u;
            goto label_3c8d50;
        }
    }
    ctx->pc = 0x3C86F0u;
label_3c86f0:
    // 0x3c86f0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3C86F0u;
    {
        const bool branch_taken_0x3c86f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C86F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86F0u;
        // 0x3c86f4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86f0) {
            ctx->pc = 0x3C87E8u;
            goto label_3c87e8;
        }
    }
    ctx->pc = 0x3C86F8u;
label_3c86f8:
    // 0x3c86f8: 0x112242  srl         $a0, $s1, 9
    ctx->pc = 0x3c86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x3c86fc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C86FCu;
    {
        const bool branch_taken_0x3c86fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C86FCu;
        // 0x3c8700: 0x2c820005  sltiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c86fc) {
            ctx->pc = 0x3C870Cu;
            goto label_3c870c;
        }
    }
    ctx->pc = 0x3C8704u;
    // 0x3c8704: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3C8704u;
    {
        const bool branch_taken_0x3c8704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8704u;
        // 0x3c8708: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8704) {
            ctx->pc = 0x3C8768u;
            goto label_3c8768;
        }
    }
    ctx->pc = 0x3C870Cu;
label_3c870c:
    // 0x3c870c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C870Cu;
    {
        const bool branch_taken_0x3c870c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C870Cu;
        // 0x3c8710: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c870c) {
            ctx->pc = 0x3C871Cu;
            goto label_3c871c;
        }
    }
    ctx->pc = 0x3C8714u;
    // 0x3c8714: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C8714u;
    {
        const bool branch_taken_0x3c8714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8714u;
        // 0x3c8718: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8714) {
            ctx->pc = 0x3C8768u;
            goto label_3c8768;
        }
    }
    ctx->pc = 0x3C871Cu;
label_3c871c:
    // 0x3c871c: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x3c871cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3c8720: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C8720u;
    {
        const bool branch_taken_0x3c8720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8720u;
        // 0x3c8724: 0x248a005b  addiu       $t2, $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8720) {
            ctx->pc = 0x3C8768u;
            goto label_3c8768;
        }
    }
    ctx->pc = 0x3C8728u;
    // 0x3c8728: 0x2c820055  sltiu       $v0, $a0, 0x55
    ctx->pc = 0x3c8728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3c872c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C872Cu;
    {
        const bool branch_taken_0x3c872c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C872Cu;
        // 0x3c8730: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c872c) {
            ctx->pc = 0x3C873Cu;
            goto label_3c873c;
        }
    }
    ctx->pc = 0x3C8734u;
    // 0x3c8734: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C8734u;
    {
        const bool branch_taken_0x3c8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8734u;
        // 0x3c8738: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8734) {
            ctx->pc = 0x3C8768u;
            goto label_3c8768;
        }
    }
    ctx->pc = 0x3C873Cu;
label_3c873c:
    // 0x3c873c: 0x2c820155  sltiu       $v0, $a0, 0x155
    ctx->pc = 0x3c873cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x3c8740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8740u;
    {
        const bool branch_taken_0x3c8740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8740u;
        // 0x3c8744: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8740) {
            ctx->pc = 0x3C8750u;
            goto label_3c8750;
        }
    }
    ctx->pc = 0x3C8748u;
    // 0x3c8748: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C8748u;
    {
        const bool branch_taken_0x3c8748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C874Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8748u;
        // 0x3c874c: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8748) {
            ctx->pc = 0x3C8768u;
            goto label_3c8768;
        }
    }
    ctx->pc = 0x3C8750u;
label_3c8750:
    // 0x3c8750: 0x2c820555  sltiu       $v0, $a0, 0x555
    ctx->pc = 0x3c8750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x3c8754: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8754u;
    {
        const bool branch_taken_0x3c8754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8754u;
        // 0x3c8758: 0x111482  srl         $v0, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8754) {
            ctx->pc = 0x3C8764u;
            goto label_3c8764;
        }
    }
    ctx->pc = 0x3C875Cu;
    // 0x3c875c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C875Cu;
    {
        const bool branch_taken_0x3c875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C875Cu;
        // 0x3c8760: 0x244a007c  addiu       $t2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c875c) {
            ctx->pc = 0x3C8768u;
            goto label_3c8768;
        }
    }
    ctx->pc = 0x3C8764u;
label_3c8764:
    // 0x3c8764: 0x240a007e  addiu       $t2, $zero, 0x7E
    ctx->pc = 0x3c8764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3c8768:
    // 0x3c8768: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c8768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c876c: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x3c876cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x3c8770: 0x2443d180  addiu       $v1, $v0, -0x2E80
    ctx->pc = 0x3c8770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
    // 0x3c8774: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x3c8774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c8778: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x3c8778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x3c877c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C877Cu;
    {
        const bool branch_taken_0x3c877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C877Cu;
        // 0x3c8780: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c877c) {
            ctx->pc = 0x3C8794u;
            goto label_3c8794;
        }
    }
    ctx->pc = 0x3C8784u;
    // 0x3c8784: 0x0  nop
    ctx->pc = 0x3c8784u;
    // NOP
label_3c8788:
    // 0x3c8788: 0x4e30140  bgezl       $a3, . + 4 + (0x140 << 2)
    ctx->pc = 0x3C8788u;
    {
        const bool branch_taken_0x3c8788 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x3c8788) {
            ctx->pc = 0x3C878Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8788u;
            // 0x3c878c: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8C8Cu;
            goto label_3c8c8c;
        }
    }
    ctx->pc = 0x3C8790u;
    // 0x3c8790: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3c8790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3c8794:
    // 0x3c8794: 0x52080014  beql        $s0, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C8794u;
    {
        const bool branch_taken_0x3c8794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        if (branch_taken_0x3c8794) {
            ctx->pc = 0x3C8798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8794u;
            // 0x3c8798: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C87E8u;
            goto label_3c87e8;
        }
    }
    ctx->pc = 0x3C879Cu;
    // 0x3c879c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c87a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c87a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c87a4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3c87a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3c87a8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x3c87a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c87ac: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x3c87acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3c87b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C87B0u;
    {
        const bool branch_taken_0x3c87b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87B0u;
        // 0x3c87b4: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87b0) {
            ctx->pc = 0x3C87C8u;
            goto label_3c87c8;
        }
    }
    ctx->pc = 0x3C87B8u;
    // 0x3c87b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c87b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c87bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c87bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c87c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C87C0u;
    {
        const bool branch_taken_0x3c87c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C87C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87C0u;
        // 0x3c87c4: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87c0) {
            ctx->pc = 0x3C87D4u;
            goto label_3c87d4;
        }
    }
    ctx->pc = 0x3C87C8u;
label_3c87c8:
    // 0x3c87c8: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x3c87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3c87cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c87ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c87d0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3c87d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3c87d4:
    // 0x3c87d4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3c87d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c87d8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3C87D8u;
    {
        const bool branch_taken_0x3c87d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c87d8) {
            ctx->pc = 0x3C8788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8788;
        }
    }
    ctx->pc = 0x3C87E0u;
    // 0x3c87e0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x3c87e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x3c87e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c87e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3c87e8:
    // 0x3c87e8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c87e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c87ec: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x3c87ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c87f0: 0x2442d188  addiu       $v0, $v0, -0x2E78
    ctx->pc = 0x3c87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955400));
    // 0x3c87f4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3c87f4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x42D190u));
    // 0x3c87f8: 0x12020086  beq         $s0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x3C87F8u;
    {
        const bool branch_taken_0x3c87f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C87F8u;
        // 0x3c87fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c87f8) {
            ctx->pc = 0x3C8A14u;
            goto label_3c8a14;
        }
    }
    ctx->pc = 0x3C8800u;
    // 0x3c8800: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c8800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c8804: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c8804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8808: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3c8808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3c880c: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x3c880cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c8810: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x3c8810u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3c8814: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8814u;
    {
        const bool branch_taken_0x3c8814 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8814u;
        // 0x3c8818: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8814) {
            ctx->pc = 0x3C882Cu;
            goto label_3c882c;
        }
    }
    ctx->pc = 0x3C881Cu;
    // 0x3c881c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8820: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c8820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c8824: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8824u;
    {
        const bool branch_taken_0x3c8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8824u;
        // 0x3c8828: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8824) {
            ctx->pc = 0x3C8838u;
            goto label_3c8838;
        }
    }
    ctx->pc = 0x3C882Cu;
label_3c882c:
    // 0x3c882c: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x3c882cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3c8830: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8834: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3c8834u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3c8838:
    // 0x3c8838: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3c8838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c883c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C883Cu;
    {
        const bool branch_taken_0x3c883c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C883Cu;
        // 0x3c8840: 0x25c4d188  addiu       $a0, $t6, -0x2E78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c883c) {
            ctx->pc = 0x3C8890u;
            goto label_3c8890;
        }
    }
    ctx->pc = 0x3C8844u;
    // 0x3c8844: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x3c8844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x3c8848: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c8848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c884c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3c884cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3c8850: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x3c8850u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3c8854: 0x25c5d188  addiu       $a1, $t6, -0x2E78
    ctx->pc = 0x3c8854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955400));
    // 0x3c8858: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x3c8858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x3c885c: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x3c885cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x3c8860: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x3c8860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3c8864: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c8864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c8868: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x3c8868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x3c886c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c8870: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c8870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3c8874: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x3c8874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3c8878: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x3c8878u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x3c887c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x3c887cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x3c8880: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8884: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x3c8884u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x3c8888: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x3C8888u;
    {
        const bool branch_taken_0x3c8888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8888u;
        // 0x3c888c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8888) {
            ctx->pc = 0x3C8D54u;
            goto label_3c8d54;
        }
    }
    ctx->pc = 0x3C8890u;
label_3c8890:
    // 0x3c8890: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x3c8890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x3c8894: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C8894u;
    {
        const bool branch_taken_0x3c8894 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x3C8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8894u;
        // 0x3c8898: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8894) {
            ctx->pc = 0x3C88B0u;
            goto label_3c88b0;
        }
    }
    ctx->pc = 0x3C889Cu;
    // 0x3c889c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x3c889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3c88a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c88a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c88a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c88a8: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x3C88A8u;
    {
        const bool branch_taken_0x3c88a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88A8u;
        // 0x3c88ac: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88a8) {
            ctx->pc = 0x3C8D50u;
            goto label_3c8d50;
        }
    }
    ctx->pc = 0x3C88B0u;
label_3c88b0:
    // 0x3c88b0: 0x2ca20200  sltiu       $v0, $a1, 0x200
    ctx->pc = 0x3c88b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x3c88b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C88B4u;
    {
        const bool branch_taken_0x3c88b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88B4u;
        // 0x3c88b8: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88b4) {
            ctx->pc = 0x3C8900u;
            goto label_3c8900;
        }
    }
    ctx->pc = 0x3C88BCu;
    // 0x3c88bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c88c0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3c88c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c88c4: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3c88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3c88c8: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3c88c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3c88cc: 0x2485fff8  addiu       $a1, $a0, -0x8
    ctx->pc = 0x3c88ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x3c88d0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3c88d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3c88d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c88d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c88d8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3c88d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3c88dc: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x3c88dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3c88e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c88e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c88e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c88e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c88e8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3c88e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3c88ec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3c88ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3c88f0: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x3c88f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3c88f4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x3c88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x3c88f8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3C88F8u;
    {
        const bool branch_taken_0x3c88f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C88FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C88F8u;
        // 0x3c88fc: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c88f8) {
            ctx->pc = 0x3C8A00u;
            goto label_3c8a00;
        }
    }
    ctx->pc = 0x3C8900u;
label_3c8900:
    // 0x3c8900: 0x51a42  srl         $v1, $a1, 9
    ctx->pc = 0x3c8900u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 9));
    // 0x3c8904: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8904u;
    {
        const bool branch_taken_0x3c8904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8904u;
        // 0x3c8908: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8904) {
            ctx->pc = 0x3C8914u;
            goto label_3c8914;
        }
    }
    ctx->pc = 0x3C890Cu;
    // 0x3c890c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3C890Cu;
    {
        const bool branch_taken_0x3c890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C890Cu;
        // 0x3c8910: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c890c) {
            ctx->pc = 0x3C8970u;
            goto label_3c8970;
        }
    }
    ctx->pc = 0x3C8914u;
label_3c8914:
    // 0x3c8914: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8914u;
    {
        const bool branch_taken_0x3c8914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8914u;
        // 0x3c8918: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8914) {
            ctx->pc = 0x3C8924u;
            goto label_3c8924;
        }
    }
    ctx->pc = 0x3C891Cu;
    // 0x3c891c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C891Cu;
    {
        const bool branch_taken_0x3c891c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C891Cu;
        // 0x3c8920: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c891c) {
            ctx->pc = 0x3C8970u;
            goto label_3c8970;
        }
    }
    ctx->pc = 0x3C8924u;
label_3c8924:
    // 0x3c8924: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x3c8924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x3c8928: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C8928u;
    {
        const bool branch_taken_0x3c8928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C892Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8928u;
        // 0x3c892c: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8928) {
            ctx->pc = 0x3C8970u;
            goto label_3c8970;
        }
    }
    ctx->pc = 0x3C8930u;
    // 0x3c8930: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x3c8930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x3c8934: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8934u;
    {
        const bool branch_taken_0x3c8934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8934u;
        // 0x3c8938: 0x51302  srl         $v0, $a1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8934) {
            ctx->pc = 0x3C8944u;
            goto label_3c8944;
        }
    }
    ctx->pc = 0x3C893Cu;
    // 0x3c893c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C893Cu;
    {
        const bool branch_taken_0x3c893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C893Cu;
        // 0x3c8940: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c893c) {
            ctx->pc = 0x3C8970u;
            goto label_3c8970;
        }
    }
    ctx->pc = 0x3C8944u;
label_3c8944:
    // 0x3c8944: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x3c8944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x3c8948: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8948u;
    {
        const bool branch_taken_0x3c8948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8948u;
        // 0x3c894c: 0x513c2  srl         $v0, $a1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8948) {
            ctx->pc = 0x3C8958u;
            goto label_3c8958;
        }
    }
    ctx->pc = 0x3C8950u;
    // 0x3c8950: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C8950u;
    {
        const bool branch_taken_0x3c8950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8950u;
        // 0x3c8954: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8950) {
            ctx->pc = 0x3C8970u;
            goto label_3c8970;
        }
    }
    ctx->pc = 0x3C8958u;
label_3c8958:
    // 0x3c8958: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x3c8958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x3c895c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C895Cu;
    {
        const bool branch_taken_0x3c895c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C895Cu;
        // 0x3c8960: 0x51482  srl         $v0, $a1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c895c) {
            ctx->pc = 0x3C896Cu;
            goto label_3c896c;
        }
    }
    ctx->pc = 0x3C8964u;
    // 0x3c8964: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C8964u;
    {
        const bool branch_taken_0x3c8964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8964u;
        // 0x3c8968: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8964) {
            ctx->pc = 0x3C8970u;
            goto label_3c8970;
        }
    }
    ctx->pc = 0x3C896Cu;
label_3c896c:
    // 0x3c896c: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x3c896cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_3c8970:
    // 0x3c8970: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3c8970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3c8974: 0x2689d180  addiu       $t1, $s4, -0x2E80
    ctx->pc = 0x3c8974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
    // 0x3c8978: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x3c8978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3c897c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x3c897cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x3c8980: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x3C8980u;
    {
        const bool branch_taken_0x3c8980 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x3c8980) {
            ctx->pc = 0x3C8984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8980u;
            // 0x3c8984: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C89BCu;
            goto label_3c89bc;
        }
    }
    ctx->pc = 0x3C8988u;
    // 0x3c8988: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c8988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c898c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x3c898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x3c8990: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3c8990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c8994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c8994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8998: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x3c8998u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x3c899c: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x3c899cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3c89a0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x3c89a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x3c89a4: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x3c89a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x3c89a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c89a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c89ac: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3c89acu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3c89b0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3c89b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3c89b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C89B4u;
    {
        const bool branch_taken_0x3c89b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C89B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C89B4u;
        // 0x3c89b8: 0xad250004  sw          $a1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c89b4) {
            ctx->pc = 0x3C8A00u;
            goto label_3c8a00;
        }
    }
    ctx->pc = 0x3C89BCu;
label_3c89bc:
    // 0x3c89bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c89c0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3c89c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3c89c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c89c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c89c8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3c89c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c89cc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3C89CCu;
    {
        const bool branch_taken_0x3c89cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c89cc) {
            ctx->pc = 0x3C89D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C89CCu;
            // 0x3c89d0: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8A00u;
            goto label_3c8a00;
        }
    }
    ctx->pc = 0x3C89D4u;
    // 0x3c89d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c89d8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3c89d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3c89dc: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3c89dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3c89e0:
    // 0x3c89e0: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C89E0u;
    {
        const bool branch_taken_0x3c89e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x3c89e0) {
            ctx->pc = 0x3C89E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C89E0u;
            // 0x3c89e4: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8A00u;
            goto label_3c8a00;
        }
    }
    ctx->pc = 0x3C89E8u;
    // 0x3c89e8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3c89e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3c89ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c89ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c89f0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x3c89f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c89f4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C89F4u;
    {
        const bool branch_taken_0x3c89f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c89f4) {
            ctx->pc = 0x3C89F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C89F4u;
            // 0x3c89f8: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C89E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c89e0;
        }
    }
    ctx->pc = 0x3C89FCu;
    // 0x3c89fc: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x3c89fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_3c8a00:
    // 0x3c8a00: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x3c8a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x3c8a04: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x3c8a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x3c8a08: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x3c8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x3c8a0c: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x3c8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x3c8a10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c8a14:
    // 0x3c8a14: 0x25440003  addiu       $a0, $t2, 0x3
    ctx->pc = 0x3c8a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x3c8a18: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x3c8a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x3c8a1c: 0x2683d180  addiu       $v1, $s4, -0x2E80
    ctx->pc = 0x3c8a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
    // 0x3c8a20: 0x142200b  movn        $a0, $t2, $v0
    ctx->pc = 0x3c8a20u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
    // 0x3c8a24: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x3c8a24u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c8a28: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x3c8a28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x3c8a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8a30: 0x823014  dsllv       $a2, $v0, $a0
    ctx->pc = 0x3c8a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x3c8a34: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x3c8a34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3c8a38: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x3C8A38u;
    {
        const bool branch_taken_0x3c8a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A38u;
        // 0x3c8a3c: 0x2683d180  addiu       $v1, $s4, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a38) {
            ctx->pc = 0x3C8BA8u;
            goto label_3c8ba8;
        }
    }
    ctx->pc = 0x3C8A40u;
    // 0x3c8a40: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x3c8a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3c8a44: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3C8A44u;
    {
        const bool branch_taken_0x3c8a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A44u;
        // 0x3c8a48: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a44) {
            ctx->pc = 0x3C8A84u;
            goto label_3c8a84;
        }
    }
    ctx->pc = 0x3C8A4Cu;
    // 0x3c8a4c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x3c8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3c8a50: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3c8a50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3c8a54: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x3c8a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x3c8a58: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x3c8a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3c8a5c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C8A5Cu;
    {
        const bool branch_taken_0x3c8a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A5Cu;
        // 0x3c8a60: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a5c) {
            ctx->pc = 0x3C8A80u;
            goto label_3c8a80;
        }
    }
    ctx->pc = 0x3C8A64u;
    // 0x3c8a64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3c8a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c8a68:
    // 0x3c8a68: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3c8a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3c8a6c: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x3c8a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3c8a70: 0x0  nop
    ctx->pc = 0x3c8a70u;
    // NOP
    // 0x3c8a74: 0x0  nop
    ctx->pc = 0x3c8a74u;
    // NOP
    // 0x3c8a78: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C8A78u;
    {
        const bool branch_taken_0x3c8a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8A78u;
        // 0x3c8a7c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8a78) {
            ctx->pc = 0x3C8A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8a68;
        }
    }
    ctx->pc = 0x3C8A80u;
label_3c8a80:
    // 0x3c8a80: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3c8a84:
    // 0x3c8a84: 0x244cd180  addiu       $t4, $v0, -0x2E80
    ctx->pc = 0x3c8a84u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955392));
    // 0x3c8a88: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x3c8a88u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8a8c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x3c8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_3c8a90:
    // 0x3c8a90: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3c8a90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8a94: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x3c8a94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3c8a98: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x3c8a98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8a9c: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x3c8a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3c8aa0:
    // 0x3c8aa0: 0x12080019  beq         $s0, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C8AA0u;
    {
        const bool branch_taken_0x3c8aa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x3C8AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AA0u;
        // 0x3c8aa4: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8aa0) {
            ctx->pc = 0x3C8B08u;
            goto label_3c8b08;
        }
    }
    ctx->pc = 0x3C8AA8u;
    // 0x3c8aa8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3c8aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8aac: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x3c8aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x3c8ab0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c8ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c8ab4: 0x0  nop
    ctx->pc = 0x3c8ab4u;
    // NOP
label_3c8ab8:
    // 0x3c8ab8: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x3c8ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3c8abc: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x3c8abcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3c8ac0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8AC0u;
    {
        const bool branch_taken_0x3c8ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AC0u;
        // 0x3c8ac4: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ac0) {
            ctx->pc = 0x3C8AD8u;
            goto label_3c8ad8;
        }
    }
    ctx->pc = 0x3C8AC8u;
    // 0x3c8ac8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8acc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c8accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c8ad0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8AD0u;
    {
        const bool branch_taken_0x3c8ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AD0u;
        // 0x3c8ad4: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ad0) {
            ctx->pc = 0x3C8AE4u;
            goto label_3c8ae4;
        }
    }
    ctx->pc = 0x3C8AD8u;
label_3c8ad8:
    // 0x3c8ad8: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x3c8ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x3c8adc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8ae0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3c8ae0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3c8ae4:
    // 0x3c8ae4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3c8ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c8ae8: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x3C8AE8u;
    {
        const bool branch_taken_0x3c8ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8ae8) {
            ctx->pc = 0x3C8AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8AE8u;
            // 0x3c8aec: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8CACu;
            goto label_3c8cac;
        }
    }
    ctx->pc = 0x3C8AF0u;
    // 0x3c8af0: 0x4e10084  bgez        $a3, . + 4 + (0x84 << 2)
    ctx->pc = 0x3C8AF0u;
    {
        const bool branch_taken_0x3c8af0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x3C8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8AF0u;
        // 0x3c8af4: 0x2051821  addu        $v1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8af0) {
            ctx->pc = 0x3C8D04u;
            goto label_3c8d04;
        }
    }
    ctx->pc = 0x3C8AF8u;
    // 0x3c8af8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x3c8af8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c8afc: 0x5608ffee  bnel        $s0, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3C8AFCu;
    {
        const bool branch_taken_0x3c8afc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        if (branch_taken_0x3c8afc) {
            ctx->pc = 0x3C8B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8AFCu;
            // 0x3c8b00: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8ab8;
        }
    }
    ctx->pc = 0x3C8B04u;
    // 0x3c8b04: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x3c8b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_3c8b08:
    // 0x3c8b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8B08u;
    {
        const bool branch_taken_0x3c8b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B08u;
        // 0x3c8b0c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b08) {
            ctx->pc = 0x3C8B18u;
            goto label_3c8b18;
        }
    }
    ctx->pc = 0x3C8B10u;
    // 0x3c8b10: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x3c8b10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3c8b14: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c8b14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_3c8b18:
    // 0x3c8b18: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3c8b18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3c8b1c: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x3c8b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x3c8b20: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3C8B20u;
    {
        const bool branch_taken_0x3c8b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b20) {
            ctx->pc = 0x3C8B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8B20u;
            // 0x3c8b24: 0x8d10000c  lw          $s0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8aa0;
        }
    }
    ctx->pc = 0x3C8B28u;
label_3c8b28:
    // 0x3c8b28: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x3c8b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x3c8b2c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C8B2Cu;
    {
        const bool branch_taken_0x3c8b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B2Cu;
        // 0x3c8b30: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b2c) {
            ctx->pc = 0x3C8B88u;
            goto label_3c8b88;
        }
    }
    ctx->pc = 0x3C8B34u;
    // 0x3c8b34: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x3c8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x3c8b38: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C8B38u;
    {
        const bool branch_taken_0x3c8b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x3C8B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B38u;
        // 0x3c8b3c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b38) {
            ctx->pc = 0x3C8B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8b28;
        }
    }
    ctx->pc = 0x3C8B40u;
label_3c8b40:
    // 0x3c8b40: 0x9d830004  lwu         $v1, 0x4($t4)
    ctx->pc = 0x3c8b40u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3c8b44: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3c8b44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3c8b48: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x3c8b48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3c8b4c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C8B4Cu;
    {
        const bool branch_taken_0x3c8b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8b4c) {
            ctx->pc = 0x3C8B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8B4Cu;
            // 0x3c8b50: 0x2683d180  addiu       $v1, $s4, -0x2E80 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8BA8u;
            goto label_3c8ba8;
        }
    }
    ctx->pc = 0x3C8B54u;
    // 0x3c8b54: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C8B54u;
    {
        const bool branch_taken_0x3c8b54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B54u;
        // 0x3c8b58: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b54) {
            ctx->pc = 0x3C8BA4u;
            goto label_3c8ba4;
        }
    }
    ctx->pc = 0x3C8B5Cu;
    // 0x3c8b5c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3C8B5Cu;
    {
        const bool branch_taken_0x3c8b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B5Cu;
        // 0x3c8b60: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b5c) {
            ctx->pc = 0x3C8A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8a90;
        }
    }
    ctx->pc = 0x3C8B64u;
    // 0x3c8b64: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x3c8b64u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_3c8b68:
    // 0x3c8b68: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x3c8b68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x3c8b6c: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x3c8b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x3c8b70: 0x0  nop
    ctx->pc = 0x3c8b70u;
    // NOP
    // 0x3c8b74: 0x0  nop
    ctx->pc = 0x3c8b74u;
    // NOP
    // 0x3c8b78: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C8B78u;
    {
        const bool branch_taken_0x3c8b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B78u;
        // 0x3c8b7c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b78) {
            ctx->pc = 0x3C8B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8b68;
        }
    }
    ctx->pc = 0x3C8B80u;
    // 0x3c8b80: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x3C8B80u;
    {
        const bool branch_taken_0x3c8b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B80u;
        // 0x3c8b84: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b80) {
            ctx->pc = 0x3C8A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8a90;
        }
    }
    ctx->pc = 0x3C8B88u;
label_3c8b88:
    // 0x3c8b88: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x3c8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3c8b8c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3c8b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3c8b90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c8b90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c8b94: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3c8b94u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3c8b98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3c8b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c8b9c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3C8B9Cu;
    {
        const bool branch_taken_0x3c8b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8B9Cu;
        // 0x3c8ba0: 0xad830004  sw          $v1, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8b9c) {
            ctx->pc = 0x3C8B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c8b40;
        }
    }
    ctx->pc = 0x3C8BA4u;
label_3c8ba4:
    // 0x3c8ba4: 0x2683d180  addiu       $v1, $s4, -0x2E80
    ctx->pc = 0x3c8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
label_3c8ba8:
    // 0x3c8ba8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8bac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x3c8bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3c8bb0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3c8bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3c8bb4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3c8bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c8bb8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3c8bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3c8bbc: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x3c8bbcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3c8bc0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C8BC0u;
    {
        const bool branch_taken_0x3c8bc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8bc0) {
            ctx->pc = 0x3C8BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8BC0u;
            // 0x3c8bc4: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8BDCu;
            goto label_3c8bdc;
        }
    }
    ctx->pc = 0x3C8BC8u;
    // 0x3c8bc8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x3c8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c8bcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8bd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c8bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c8bd4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8BD4u;
    {
        const bool branch_taken_0x3c8bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8BD4u;
        // 0x3c8bd8: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8bd4) {
            ctx->pc = 0x3C8BE4u;
            goto label_3c8be4;
        }
    }
    ctx->pc = 0x3C8BDCu;
label_3c8bdc:
    // 0x3c8bdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8be0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3c8be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3c8be4:
    // 0x3c8be4: 0x2692d180  addiu       $s2, $s4, -0x2E80
    ctx->pc = 0x3c8be4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
    // 0x3c8be8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x3c8be8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8bec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3c8becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3c8bf0: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x3c8bf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x3c8bf4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c8bf8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x3c8bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x3c8bfc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3c8bfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3c8c00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8C00u;
    {
        const bool branch_taken_0x3c8c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C00u;
        // 0x3c8c04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c00) {
            ctx->pc = 0x3C8C14u;
            goto label_3c8c14;
        }
    }
    ctx->pc = 0x3C8C08u;
    // 0x3c8c08: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3c8c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c8c0c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3C8C0Cu;
    {
        const bool branch_taken_0x3c8c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C0Cu;
        // 0x3c8c10: 0x2686d180  addiu       $a2, $s4, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c0c) {
            ctx->pc = 0x3C8D28u;
            goto label_3c8d28;
        }
    }
    ctx->pc = 0x3C8C14u;
label_3c8c14:
    // 0x3c8c14: 0xc0f20fa  jal         func_3C83E8
    ctx->pc = 0x3C8C14u;
    SET_GPR_U32(ctx, 31, 0x3C8C1Cu);
    ctx->pc = 0x3C8C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8C14u;
    // 0x3c8c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C83E8u, 0x3C8C14u, 0x3C8C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8C1Cu;
label_3c8c1c:
    // 0x3c8c1c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3c8c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3c8c20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3c8c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3c8c24: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x3c8c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x3c8c28: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3c8c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3c8c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C8C2Cu;
    {
        const bool branch_taken_0x3c8c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C2Cu;
        // 0x3c8c30: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c2c) {
            ctx->pc = 0x3C8C44u;
            goto label_3c8c44;
        }
    }
    ctx->pc = 0x3C8C34u;
    // 0x3c8c34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8c38: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c8c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c8c3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3C8C3Cu;
    {
        const bool branch_taken_0x3c8c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C3Cu;
        // 0x3c8c40: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c3c) {
            ctx->pc = 0x3C8C50u;
            goto label_3c8c50;
        }
    }
    ctx->pc = 0x3C8C44u;
label_3c8c44:
    // 0x3c8c44: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x3c8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3c8c48: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8c4c: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x3c8c4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_3c8c50:
    // 0x3c8c50: 0x2682d180  addiu       $v0, $s4, -0x2E80
    ctx->pc = 0x3c8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
    // 0x3c8c54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3c8c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3c8c58: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3c8c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3c8c5c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x3c8c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x3c8c60: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3c8c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3c8c64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3c8c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3c8c68: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3c8c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3c8c6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C8C6Cu;
    {
        const bool branch_taken_0x3c8c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C6Cu;
        // 0x3c8c70: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c6c) {
            ctx->pc = 0x3C8C7Cu;
            goto label_3c8c7c;
        }
    }
    ctx->pc = 0x3C8C74u;
    // 0x3c8c74: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3C8C74u;
    {
        const bool branch_taken_0x3c8c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C74u;
        // 0x3c8c78: 0x2686d180  addiu       $a2, $s4, -0x2E80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294955392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c74) {
            ctx->pc = 0x3C8D28u;
            goto label_3c8d28;
        }
    }
    ctx->pc = 0x3C8C7Cu;
label_3c8c7c:
    // 0x3c8c7c: 0xc0f2550  jal         func_3C9540
    ctx->pc = 0x3C8C7Cu;
    SET_GPR_U32(ctx, 31, 0x3C8C84u);
    ctx->pc = 0x3C8C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C8C7Cu;
    // 0x3c8c80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9540u, 0x3C8C7Cu, 0x3C8C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8C84u;
label_3c8c84:
    // 0x3c8c84: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3C8C84u;
    {
        const bool branch_taken_0x3c8c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8C84u;
        // 0x3c8c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8c84) {
            ctx->pc = 0x3C8D60u;
            goto label_3c8d60;
        }
    }
    ctx->pc = 0x3C8C8Cu;
label_3c8c8c:
    // 0x3c8c8c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x3c8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3c8c90: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3c8c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c8c94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8c98: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3c8c98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3c8c9c: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3c8c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x3c8ca0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c8ca4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x3C8CA4u;
    {
        const bool branch_taken_0x3c8ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CA4u;
        // 0x3c8ca8: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8ca4) {
            ctx->pc = 0x3C8D50u;
            goto label_3c8d50;
        }
    }
    ctx->pc = 0x3C8CACu;
label_3c8cac:
    // 0x3c8cac: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x3c8cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x3c8cb0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3c8cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c8cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8cb8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x3c8cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x3c8cbc: 0x25c3d188  addiu       $v1, $t6, -0x2E78
    ctx->pc = 0x3c8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294955400));
    // 0x3c8cc0: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3c8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3c8cc4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3c8cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3c8cc8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x3c8cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x3c8ccc: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x3c8cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3c8cd0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3c8cd0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3c8cd4: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x3c8cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3c8cd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8cdc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c8cdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c8ce0: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x3c8ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x3c8ce4: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x3c8ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3c8ce8: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x3c8ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x3c8cec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8cf0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x3c8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x3c8cf4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x3c8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x3c8cf8: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x3c8cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x3c8cfc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3C8CFCu;
    {
        const bool branch_taken_0x3c8cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8CFCu;
        // 0x3c8d00: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8cfc) {
            ctx->pc = 0x3C8D54u;
            goto label_3c8d54;
        }
    }
    ctx->pc = 0x3C8D04u;
label_3c8d04:
    // 0x3c8d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8d08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3c8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3c8d0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3c8d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3c8d10: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3c8d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3c8d14: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3c8d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c8d18: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3c8d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c8d1c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x3c8d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x3c8d20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C8D20u;
    {
        const bool branch_taken_0x3c8d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D20u;
        // 0x3c8d24: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8d20) {
            ctx->pc = 0x3C8D54u;
            goto label_3c8d54;
        }
    }
    ctx->pc = 0x3C8D28u;
label_3c8d28:
    // 0x3c8d28: 0x36250001  ori         $a1, $s1, 0x1
    ctx->pc = 0x3c8d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x3c8d2c: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x3c8d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3c8d30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c8d34: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x3c8d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x3c8d38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3c8d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c8d3c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x3c8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x3c8d40: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x3c8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3c8d44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c8d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c8d48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c8d48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c8d4c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3c8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_3c8d50:
    // 0x3c8d50: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3c8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3c8d54:
    // 0x3c8d54: 0xc0f2550  jal         func_3C9540
    ctx->pc = 0x3C8D54u;
    SET_GPR_U32(ctx, 31, 0x3C8D5Cu);
    ctx->pc = 0x3C9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9540u, 0x3C8D54u, 0x3C8D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C8D5Cu;
label_3c8d5c:
    // 0x3c8d5c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x3c8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3c8d60:
    // 0x3c8d60: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c8d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c8d64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c8d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c8d68: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c8d68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c8d6c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c8d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c8d70: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c8d70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c8d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8d78: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8D78u;
        // 0x3c8d7c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8D80u;
}
