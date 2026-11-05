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

// Function: sub_0037D610
// Address: 0x37d610 - 0x37d838
void sub_0037D610_0x37d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D610_0x37d610");
#endif

    switch (ctx->pc) {
        case 0x37d650u: goto label_37d650;
        case 0x37d658u: goto label_37d658;
        case 0x37d6a8u: goto label_37d6a8;
        case 0x37d6fcu: goto label_37d6fc;
        case 0x37d750u: goto label_37d750;
        case 0x37d758u: goto label_37d758;
        case 0x37d798u: goto label_37d798;
        case 0x37d7d4u: goto label_37d7d4;
        default: break;
    }

    ctx->pc = 0x37d610u;

    // 0x37d610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37d614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37d614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37d618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37d618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37d61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d620: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37d624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x37d624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d628: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37d628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x37d62c: 0x10e0003f  beqz        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x37D62Cu;
    {
        const bool branch_taken_0x37d62c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D62Cu;
        // 0x37d630: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d62c) {
            ctx->pc = 0x37D72Cu;
            goto label_37d72c;
        }
    }
    ctx->pc = 0x37D634u;
    // 0x37d634: 0x240203f5  addiu       $v0, $zero, 0x3F5
    ctx->pc = 0x37d634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1013));
    // 0x37d638: 0x26450001  addiu       $a1, $s2, 0x1
    ctx->pc = 0x37d638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x37d63c: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x37d63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x37d640: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37d640u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d644: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37d644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d648: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x37d648u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37d64c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_37d650:
    if (ctx->pc == 0x37D650u) {
        ctx->pc = 0x37D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D64Cu;
        // 0x37d650: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37D654u;
        goto label_fallthrough_0x37d64c;
    }
    ctx->pc = 0x37D64Cu;
    {
        const bool branch_taken_0x37d64c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D64Cu;
        // 0x37d650: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d64c) {
            ctx->pc = 0x37D670u;
            goto label_37d670;
        }
    }
label_fallthrough_0x37d64c:
    ctx->pc = 0x37D654u;
    // 0x37d654: 0x0  nop
    ctx->pc = 0x37d654u;
    // NOP
label_37d658:
    // 0x37d658: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x37d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x37d65c: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x37d65cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x37d660: 0x0  nop
    ctx->pc = 0x37d660u;
    // NOP
    // 0x37d664: 0x0  nop
    ctx->pc = 0x37d664u;
    // NOP
    // 0x37d668: 0x14e0fffb  bnez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37D668u;
    {
        const bool branch_taken_0x37d668 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D668u;
        // 0x37d66c: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d668) {
            ctx->pc = 0x37D658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d658;
        }
    }
    ctx->pc = 0x37D670u;
label_37d670:
    // 0x37d670: 0x25080006  addiu       $t0, $t0, 0x6
    ctx->pc = 0x37d670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6));
    // 0x37d674: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37d674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37d678: 0x68001b  divu        $zero, $v1, $t0
    ctx->pc = 0x37d678u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x37d67c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x37d67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x37d680: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D680u;
    {
        const bool branch_taken_0x37d680 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d680) {
            ctx->pc = 0x37D684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D680u;
            // 0x37d684: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D688u;
            goto label_37d688;
        }
    }
    ctx->pc = 0x37D688u;
label_37d688:
    // 0x37d688: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x37d688u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d68c: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x37d68cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d690: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37d690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d694: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37d694u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d69c: 0x1812  mflo        $v1
    ctx->pc = 0x37d69cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x37d6a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37d6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37d6a4: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x37d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
label_37d6a8:
    // 0x37d6a8: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x37d6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x37d6ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37D6ACu;
    {
        const bool branch_taken_0x37d6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6ACu;
        // 0x37d6b0: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6ac) {
            ctx->pc = 0x37D6C0u;
            goto label_37d6c0;
        }
    }
    ctx->pc = 0x37D6B4u;
    // 0x37d6b4: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x37d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x37d6b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x37d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37d6bc: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x37d6bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_37d6c0:
    // 0x37d6c0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x37d6c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x37d6c4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x37d6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x37d6c8: 0x2d420006  sltiu       $v0, $t2, 0x6
    ctx->pc = 0x37d6c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x37d6cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x37D6CCu;
    {
        const bool branch_taken_0x37d6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D6CCu;
        // 0x37d6d0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d6cc) {
            ctx->pc = 0x37D6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d6a8;
        }
    }
    ctx->pc = 0x37D6D4u;
    // 0x37d6d4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x37d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x37d6d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37d6dc: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x37d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x37d6e0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x37d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x37d6e4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x37d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x37d6e8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x37d6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x37d6ec: 0x248453d0  addiu       $a0, $a0, 0x53D0
    ctx->pc = 0x37d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21456));
    // 0x37d6f0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x37d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x37d6f4: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x37D6F4u;
    SET_GPR_U32(ctx, 31, 0x37D6FCu);
    ctx->pc = 0x37D6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D6F4u;
    // 0x37d6f8: 0xae090034  sw          $t1, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x37D6F4u, 0x37D6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D6FCu;
label_37d6fc:
    // 0x37d6fc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x37d6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37d700: 0x3c070300  lui         $a3, 0x300
    ctx->pc = 0x37d700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)768 << 16));
    // 0x37d704: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x37d704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x37d708: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x37d708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x37d70c: 0x3c066c02  lui         $a2, 0x6C02
    ctx->pc = 0x37d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27650 << 16));
    // 0x37d710: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x37d710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x37d714: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x37d714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x37d718: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x37d718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37d71c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x37d71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x37d720: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x37d720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x37d724: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x37D724u;
    {
        const bool branch_taken_0x37d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D724u;
        // 0x37d728: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d724) {
            ctx->pc = 0x37D810u;
            goto label_37d810;
        }
    }
    ctx->pc = 0x37D72Cu;
label_37d72c:
    // 0x37d72c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x37d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x37d730: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x37d730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d734: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x37d734u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x37d738: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x37d738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d73c: 0x29842  srl         $s3, $v0, 1
    ctx->pc = 0x37d73cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x37d740: 0x260a0010  addiu       $t2, $s0, 0x10
    ctx->pc = 0x37d740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37d744: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37D744u;
    {
        const bool branch_taken_0x37d744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D744u;
        // 0x37d748: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d744) {
            ctx->pc = 0x37D768u;
            goto label_37d768;
        }
    }
    ctx->pc = 0x37D74Cu;
    // 0x37d74c: 0x0  nop
    ctx->pc = 0x37d74cu;
    // NOP
label_37d750:
    // 0x37d750: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x37d750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37d754: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x37d754u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_37d758:
    // 0x37d758: 0x0  nop
    ctx->pc = 0x37d758u;
    // NOP
    // 0x37d75c: 0x0  nop
    ctx->pc = 0x37d75cu;
    // NOP
    // 0x37d760: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37D760u;
    {
        const bool branch_taken_0x37d760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D760u;
        // 0x37d764: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d760) {
            ctx->pc = 0x37D750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d750;
        }
    }
    ctx->pc = 0x37D768u;
label_37d768:
    // 0x37d768: 0x24e70003  addiu       $a3, $a3, 0x3
    ctx->pc = 0x37d768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x37d76c: 0x2662fffe  addiu       $v0, $s3, -0x2
    ctx->pc = 0x37d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
    // 0x37d770: 0x47001b  divu        $zero, $v0, $a3
    ctx->pc = 0x37d770u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x37d774: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D774u;
    {
        const bool branch_taken_0x37d774 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d774) {
            ctx->pc = 0x37D778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D774u;
            // 0x37d778: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D77Cu;
            goto label_37d77c;
        }
    }
    ctx->pc = 0x37D77Cu;
label_37d77c:
    // 0x37d77c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x37d77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37d780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37d784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x37d788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d78c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x37d78cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d790: 0x8812  mflo        $s1
    ctx->pc = 0x37d790u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x37d794: 0x0  nop
    ctx->pc = 0x37d794u;
    // NOP
label_37d798:
    // 0x37d798: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x37d798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37d79c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D79Cu;
    {
        const bool branch_taken_0x37d79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D79Cu;
        // 0x37d7a0: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d79c) {
            ctx->pc = 0x37D7ACu;
            goto label_37d7ac;
        }
    }
    ctx->pc = 0x37D7A4u;
    // 0x37d7a4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x37d7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x37d7a8: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x37d7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_37d7ac:
    // 0x37d7ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x37d7acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x37d7b0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x37d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x37d7b4: 0x2d420006  sltiu       $v0, $t2, 0x6
    ctx->pc = 0x37d7b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x37d7b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x37D7B8u;
    {
        const bool branch_taken_0x37d7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D7B8u;
        // 0x37d7bc: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d7b8) {
            ctx->pc = 0x37D798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d798;
        }
    }
    ctx->pc = 0x37D7C0u;
    // 0x37d7c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x37d7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x37d7c4: 0x248453d0  addiu       $a0, $a0, 0x53D0
    ctx->pc = 0x37d7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21456));
    // 0x37d7c8: 0xae07002c  sw          $a3, 0x2C($s0)
    ctx->pc = 0x37d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 7));
    // 0x37d7cc: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x37D7CCu;
    SET_GPR_U32(ctx, 31, 0x37D7D4u);
    ctx->pc = 0x37D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D7CCu;
    // 0x37d7d0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x37D7CCu, 0x37D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D7D4u;
label_37d7d4:
    // 0x37d7d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x37d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x37d7d8: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x37d7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
    // 0x37d7dc: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x37d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x37d7e0: 0x3c066c02  lui         $a2, 0x6C02
    ctx->pc = 0x37d7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27650 << 16));
    // 0x37d7e4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x37d7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x37d7e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x37d7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37d7ec: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x37d7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x37d7f0: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x37d7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
    // 0x37d7f4: 0x2652825  or          $a1, $s3, $a1
    ctx->pc = 0x37d7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
    // 0x37d7f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x37d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x37d7fc: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x37d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x37d800: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x37d800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x37d804: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x37d804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x37d808: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x37d808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x37d80c: 0xae130038  sw          $s3, 0x38($s0)
    ctx->pc = 0x37d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 19));
label_37d810:
    // 0x37d810: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x37d810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x37d814: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x37d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37d818: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37d818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d81c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37d81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37d820: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37d820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d824: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x37d824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37d828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37d828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37d82c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D82Cu;
        // 0x37d830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D834u;
    // 0x37d834: 0x0  nop
    ctx->pc = 0x37d834u;
    // NOP
    ctx->pc = 0x37d838u;
}
