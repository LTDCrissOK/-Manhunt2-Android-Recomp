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

// Function: sub_0038A608
// Address: 0x38a608 - 0x38ad10
void sub_0038A608_0x38a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A608_0x38a608");
#endif

    switch (ctx->pc) {
        case 0x38a724u: goto label_38a724;
        case 0x38a764u: goto label_38a764;
        case 0x38a790u: goto label_38a790;
        case 0x38a794u: goto label_38a794;
        case 0x38a7d0u: goto label_38a7d0;
        case 0x38a80cu: goto label_38a80c;
        case 0x38a84cu: goto label_38a84c;
        case 0x38a894u: goto label_38a894;
        case 0x38a998u: goto label_38a998;
        case 0x38aa38u: goto label_38aa38;
        case 0x38aa80u: goto label_38aa80;
        case 0x38aad0u: goto label_38aad0;
        case 0x38aae8u: goto label_38aae8;
        case 0x38ab8cu: goto label_38ab8c;
        case 0x38abccu: goto label_38abcc;
        case 0x38ac24u: goto label_38ac24;
        case 0x38ac7cu: goto label_38ac7c;
        case 0x38acc4u: goto label_38acc4;
        case 0x38acdcu: goto label_38acdc;
        default: break;
    }

    ctx->pc = 0x38a608u;

    // 0x38a608: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x38a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x38a60c: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x38a60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x38a610: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x38a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x38a614: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x38a614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x38a618: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x38a618u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a61c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x38a61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x38a620: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x38a620u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a624: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x38a624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x38a628: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x38a628u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a62c: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x38a62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x38a630: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x38a630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a634: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x38a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x38a638: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x38a638u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a63c: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x38a63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x38a640: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x38a640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a644: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x38a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x38a648: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a64c: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x38a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x38a650: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x38a650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a654: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x38a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x38a658: 0x8e220820  lw          $v0, 0x820($s1)
    ctx->pc = 0x38a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x38a65c: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x38a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x38a660: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x38a660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x38a664: 0x30ec0008  andi        $t4, $a3, 0x8
    ctx->pc = 0x38a664u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x38a668: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x38a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x38a66c: 0x15800005  bnez        $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A66Cu;
    {
        const bool branch_taken_0x38a66c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A66Cu;
        // 0x38a670: 0xac4006cc  sw          $zero, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a66c) {
            ctx->pc = 0x38A684u;
            goto label_38a684;
        }
    }
    ctx->pc = 0x38A674u;
    // 0x38a674: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x38a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x38a678: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a67c: 0x1462011c  bne         $v1, $v0, . + 4 + (0x11C << 2)
    ctx->pc = 0x38A67Cu;
    {
        const bool branch_taken_0x38a67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A67Cu;
        // 0x38a680: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a67c) {
            ctx->pc = 0x38AAF0u;
            goto label_38aaf0;
        }
    }
    ctx->pc = 0x38A684u;
label_38a684:
    // 0x38a684: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x38a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x38a688: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38a68c: 0x14620083  bne         $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x38A68Cu;
    {
        const bool branch_taken_0x38a68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A68Cu;
        // 0x38a690: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a68c) {
            ctx->pc = 0x38A89Cu;
            goto label_38a89c;
        }
    }
    ctx->pc = 0x38A694u;
    // 0x38a694: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38a694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a698: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A698u;
    {
        const bool branch_taken_0x38a698 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x38a698) {
            ctx->pc = 0x38A69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A698u;
            // 0x38a69c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A6ACu;
            goto label_38a6ac;
        }
    }
    ctx->pc = 0x38A6A0u;
    // 0x38a6a0: 0x1580000f  bnez        $t4, . + 4 + (0xF << 2)
    ctx->pc = 0x38A6A0u;
    {
        const bool branch_taken_0x38a6a0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x38a6a0) {
            ctx->pc = 0x38A6E0u;
            goto label_38a6e0;
        }
    }
    ctx->pc = 0x38A6A8u;
    // 0x38a6a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x38a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_38a6ac:
    // 0x38a6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6b0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x38a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a6b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6b8: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x38a6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x38a6bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38a6c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a6c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6c8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x38a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x38a6cc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x38a6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38a6d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38a6d4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a6d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6d8: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x38A6D8u;
    {
        const bool branch_taken_0x38a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6D8u;
        // 0x38a6dc: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a6d8) {
            ctx->pc = 0x38AAC8u;
            goto label_38aac8;
        }
    }
    ctx->pc = 0x38A6E0u;
label_38a6e0:
    // 0x38a6e0: 0x16930022  bne         $s4, $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x38A6E0u;
    {
        const bool branch_taken_0x38a6e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x38A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A6E0u;
        // 0x38a6e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a6e0) {
            ctx->pc = 0x38A76Cu;
            goto label_38a76c;
        }
    }
    ctx->pc = 0x38A6E8u;
    // 0x38a6e8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x38a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a6ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38a6f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a6f4: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x38a6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x38a6f8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a6f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38a6fc: 0x8fc60000  lw          $a2, 0x0($fp)
    ctx->pc = 0x38a6fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x38a700: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a700u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a704: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38a704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38a708: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a708u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a70c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38a710: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a710u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a714: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x38a714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x38a718: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x38a718u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a71c: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38A71Cu;
    SET_GPR_U32(ctx, 31, 0x38A724u);
    ctx->pc = 0x38A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A71Cu;
    // 0x38a720: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38A71Cu, 0x38A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A724u;
label_38a724:
    // 0x38a724: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x38a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x38a728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a72c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x38a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x38a730: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38a730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a734: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x38a734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x38a738: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a738u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38a73c: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x38a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x38a740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a744: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38a744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38a748: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a74c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38a750: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a750u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a754: 0xafb40010  sw          $s4, 0x10($sp)
    ctx->pc = 0x38a754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 20));
    // 0x38a758: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x38a758u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a75c: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38A75Cu;
    SET_GPR_U32(ctx, 31, 0x38A764u);
    ctx->pc = 0x38A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A75Cu;
    // 0x38a760: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38A75Cu, 0x38A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A764u;
label_38a764:
    // 0x38a764: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x38A764u;
    {
        const bool branch_taken_0x38a764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A764u;
        // 0x38a768: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a764) {
            ctx->pc = 0x38AAECu;
            goto label_38aaec;
        }
    }
    ctx->pc = 0x38A76Cu;
label_38a76c:
    // 0x38a76c: 0x16830045  bne         $s4, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x38A76Cu;
    {
        const bool branch_taken_0x38a76c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x38A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A76Cu;
        // 0x38a770: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a76c) {
            ctx->pc = 0x38A884u;
            goto label_38a884;
        }
    }
    ctx->pc = 0x38A774u;
    // 0x38a774: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x38a774u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a778: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x38a778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a77c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x38a77cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38a780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a784: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x38a784u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x38a788: 0xc0e2920  jal         func_38A480
    ctx->pc = 0x38A788u;
    SET_GPR_U32(ctx, 31, 0x38A790u);
    ctx->pc = 0x38A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A788u;
    // 0x38a78c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A480u, 0x38A788u, 0x38A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A790u;
label_38a790:
    // 0x38a790: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x38a790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_38a794:
    // 0x38a794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a798: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38a798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38a79c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a79cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7a0: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x38a7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x38a7a4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a7a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38a7a8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38a7ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a7acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7b0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38a7b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a7b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7b8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x38a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x38a7bc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a7bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a7c0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x38a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x38a7c4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a7c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7c8: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38A7C8u;
    SET_GPR_U32(ctx, 31, 0x38A7D0u);
    ctx->pc = 0x38A7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A7C8u;
    // 0x38a7cc: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38A7C8u, 0x38A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A7D0u;
label_38a7d0:
    // 0x38a7d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x38a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a7d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7d8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x38a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x38a7dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a7e0: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x38a7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x38a7e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7e8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38a7ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a7ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7f0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x38a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x38a7f4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a7f8: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x38a7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x38a7fc: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a7fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a800: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x38a800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x38a804: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38A804u;
    SET_GPR_U32(ctx, 31, 0x38A80Cu);
    ctx->pc = 0x38A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A804u;
    // 0x38a808: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38A804u, 0x38A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A80Cu;
label_38a80c:
    // 0x38a80c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x38a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a814: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38a814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38a818: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38a818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a81c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x38a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x38a820: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38a820u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38a824: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38a824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38a828: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38a828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a82c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38a830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a834: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x38a834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x38a838: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a83c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x38a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x38a840: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a844: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38A844u;
    SET_GPR_U32(ctx, 31, 0x38A84Cu);
    ctx->pc = 0x38A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A844u;
    // 0x38a848: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38A844u, 0x38A84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A84Cu;
label_38a84c:
    // 0x38a84c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x38a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x38a850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a854: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x38a854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x38a858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a85c: 0x8e2501c8  lw          $a1, 0x1C8($s1)
    ctx->pc = 0x38a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 456)));
    // 0x38a860: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38a860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a864: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38a868: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a86c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x38a86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x38a870: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a874: 0xafb30018  sw          $s3, 0x18($sp)
    ctx->pc = 0x38a874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    // 0x38a878: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a87c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x38A87Cu;
    {
        const bool branch_taken_0x38a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A87Cu;
        // 0x38a880: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a87c) {
            ctx->pc = 0x38AAC8u;
            goto label_38aac8;
        }
    }
    ctx->pc = 0x38A884u;
label_38a884:
    // 0x38a884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a888: 0x24a59450  addiu       $a1, $a1, -0x6BB0
    ctx->pc = 0x38a888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939728));
    // 0x38a88c: 0xc0e290e  jal         func_38A438
    ctx->pc = 0x38A88Cu;
    SET_GPR_U32(ctx, 31, 0x38A894u);
    ctx->pc = 0x38A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A88Cu;
    // 0x38a890: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A438u, 0x38A88Cu, 0x38A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A894u;
label_38a894:
    // 0x38a894: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x38A894u;
    {
        const bool branch_taken_0x38a894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A894u;
        // 0x38a898: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a894) {
            ctx->pc = 0x38AAECu;
            goto label_38aaec;
        }
    }
    ctx->pc = 0x38A89Cu;
label_38a89c:
    // 0x38a89c: 0x8e2701d8  lw          $a3, 0x1D8($s1)
    ctx->pc = 0x38a89cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 472)));
    // 0x38a8a0: 0x8e2501e8  lw          $a1, 0x1E8($s1)
    ctx->pc = 0x38a8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 488)));
    // 0x38a8a4: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x38a8a4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x38a8a8: 0x8e2401dc  lw          $a0, 0x1DC($s1)
    ctx->pc = 0x38a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x38a8ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x38a8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a8b0: 0x8e2301ec  lw          $v1, 0x1EC($s1)
    ctx->pc = 0x38a8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
    // 0x38a8b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38a8b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a8b8: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x38a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x38a8bc: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x38a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x38a8c0: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x38a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x38a8c4: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x38a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x38a8c8: 0x14460007  bne         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A8C8u;
    {
        const bool branch_taken_0x38a8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x38A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8C8u;
        // 0x38a8cc: 0xafa3003c  sw          $v1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8c8) {
            ctx->pc = 0x38A8E8u;
            goto label_38a8e8;
        }
    }
    ctx->pc = 0x38A8D0u;
    // 0x38a8d0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x38a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x38a8d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38A8D4u;
    {
        const bool branch_taken_0x38a8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8D4u;
        // 0x38a8d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8d4) {
            ctx->pc = 0x38A8ECu;
            goto label_38a8ec;
        }
    }
    ctx->pc = 0x38A8DCu;
    // 0x38a8dc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x38a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x38a8e0: 0x2e21026  xor         $v0, $s7, $v0
    ctx->pc = 0x38a8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 2));
    // 0x38a8e4: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x38a8e4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38a8e8:
    // 0x38a8e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a8ec:
    // 0x38a8ec: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A8ECu;
    {
        const bool branch_taken_0x38a8ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x38a8ec) {
            ctx->pc = 0x38A8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A8ECu;
            // 0x38a8f0: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A900u;
            goto label_38a900;
        }
    }
    ctx->pc = 0x38A8F4u;
    // 0x38a8f4: 0x15800011  bnez        $t4, . + 4 + (0x11 << 2)
    ctx->pc = 0x38A8F4u;
    {
        const bool branch_taken_0x38a8f4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A8F4u;
        // 0x38a8f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a8f4) {
            ctx->pc = 0x38A93Cu;
            goto label_38a93c;
        }
    }
    ctx->pc = 0x38A8FCu;
    // 0x38a8fc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x38a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_38a900:
    // 0x38a900: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x38a900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x38a904: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x38a904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38a908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a90c: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x38a90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a910: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38a910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38a914: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x38a914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x38a918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a91c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x38a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x38a920: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x38a920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x38a924: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x38a924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x38a928: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a92c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38a92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38a930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a934: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x38A934u;
    {
        const bool branch_taken_0x38a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A934u;
        // 0x38a938: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a934) {
            ctx->pc = 0x38AABCu;
            goto label_38aabc;
        }
    }
    ctx->pc = 0x38A93Cu;
label_38a93c:
    // 0x38a93c: 0x16820033  bne         $s4, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x38A93Cu;
    {
        const bool branch_taken_0x38a93c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x38A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A93Cu;
        // 0x38a940: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a93c) {
            ctx->pc = 0x38AA0Cu;
            goto label_38aa0c;
        }
    }
    ctx->pc = 0x38A944u;
    // 0x38a944: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x38a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x38a948: 0x1328c0  sll         $a1, $s3, 3
    ctx->pc = 0x38a948u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x38a94c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x38a94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38a950: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x38a950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38a954: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38a958: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38a958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x38a95c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x38a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x38a960: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x38a960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x38a964: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38a964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38a968: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38a96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a970: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a974: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38a974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38a978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a97c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38a980: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38a980u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a984: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x38a984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x38a988: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a98c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38a98cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a990: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38A990u;
    SET_GPR_U32(ctx, 31, 0x38A998u);
    ctx->pc = 0x38A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A990u;
    // 0x38a994: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38A990u, 0x38A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A998u;
label_38a998:
    // 0x38a998: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x38a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x38a99c: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x38A99Cu;
    {
        const bool branch_taken_0x38a99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x38A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A99Cu;
        // 0x38a9a0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a99c) {
            ctx->pc = 0x38A9C0u;
            goto label_38a9c0;
        }
    }
    ctx->pc = 0x38A9A4u;
    // 0x38a9a4: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x38a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x38a9a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38A9A8u;
    {
        const bool branch_taken_0x38a9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9A8u;
        // 0x38a9ac: 0x8fc30008  lw          $v1, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9a8) {
            ctx->pc = 0x38A9C4u;
            goto label_38a9c4;
        }
    }
    ctx->pc = 0x38A9B0u;
    // 0x38a9b0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x38a9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a9b4: 0x2e31026  xor         $v0, $s7, $v1
    ctx->pc = 0x38a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) ^ GPR_U64(ctx, 3));
    // 0x38a9b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38A9B8u;
    {
        const bool branch_taken_0x38a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9B8u;
        // 0x38a9bc: 0x2980a  movz        $s3, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9b8) {
            ctx->pc = 0x38A9C4u;
            goto label_38a9c4;
        }
    }
    ctx->pc = 0x38A9C0u;
label_38a9c0:
    // 0x38a9c0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x38a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_38a9c4:
    // 0x38a9c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x38a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x38a9c8: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x38a9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x38a9cc: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x38a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x38a9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38a9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38a9d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38a9d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38a9e0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x38a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x38a9e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38a9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38a9e8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x38a9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a9ec: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x38a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x38a9f0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38a9f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38a9f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38a9f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9f8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x38a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x38a9fc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38a9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38aa00: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38aa00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa04: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x38AA04u;
    {
        const bool branch_taken_0x38aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA04u;
        // 0x38aa08: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa04) {
            ctx->pc = 0x38AAC8u;
            goto label_38aac8;
        }
    }
    ctx->pc = 0x38AA0Cu;
label_38aa0c:
    // 0x38aa0c: 0x16820032  bne         $s4, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x38AA0Cu;
    {
        const bool branch_taken_0x38aa0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x38AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA0Cu;
        // 0x38aa10: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa0c) {
            ctx->pc = 0x38AAD8u;
            goto label_38aad8;
        }
    }
    ctx->pc = 0x38AA14u;
    // 0x38aa14: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x38aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x38aa18: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x38aa18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38aa1c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x38aa1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38aa20: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x38aa20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa24: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x38aa24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38aa28: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x38aa28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x38aa2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa30: 0xc0e2920  jal         func_38A480
    ctx->pc = 0x38AA30u;
    SET_GPR_U32(ctx, 31, 0x38AA38u);
    ctx->pc = 0x38AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA30u;
    // 0x38aa34: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A480u, 0x38AA30u, 0x38AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA38u;
label_38aa38:
    // 0x38aa38: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x38aa38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38aa3c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x38aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x38aa40: 0x8e480004  lw          $t0, 0x4($s2)
    ctx->pc = 0x38aa40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x38aa44: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x38aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38aa48: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x38aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38aa4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38aa4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x38aa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38aa54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38aa54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa58: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x38aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x38aa5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38aa5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa60: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38aa64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38aa64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa68: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38aa6c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x38aa6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38aa70: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x38aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x38aa74: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38aa74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aa78: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38AA78u;
    SET_GPR_U32(ctx, 31, 0x38AA80u);
    ctx->pc = 0x38AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA78u;
    // 0x38aa7c: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38AA78u, 0x38AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA80u;
label_38aa80:
    // 0x38aa80: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x38aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x38aa84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x38aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38aa88: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x38aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x38aa8c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x38aa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x38aa90: 0x77100b  movn        $v0, $v1, $s7
    ctx->pc = 0x38aa90u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x38aa94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x38aa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x38aa98: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x38aa98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38aa9c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x38aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x38aaa0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38aaa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38aaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aaac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x38aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x38aab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38aab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aab4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38aab8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38aab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38aabc:
    // 0x38aabc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38aabcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aac0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x38aac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38aac4: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38aac4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38aac8:
    // 0x38aac8: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38AAC8u;
    SET_GPR_U32(ctx, 31, 0x38AAD0u);
    ctx->pc = 0x38AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAC8u;
    // 0x38aacc: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38AAC8u, 0x38AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAD0u;
label_38aad0:
    // 0x38aad0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38AAD0u;
    {
        const bool branch_taken_0x38aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAD0u;
        // 0x38aad4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aad0) {
            ctx->pc = 0x38AAECu;
            goto label_38aaec;
        }
    }
    ctx->pc = 0x38AAD8u;
label_38aad8:
    // 0x38aad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38aad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aadc: 0x24a59470  addiu       $a1, $a1, -0x6B90
    ctx->pc = 0x38aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939760));
    // 0x38aae0: 0xc0e290e  jal         func_38A438
    ctx->pc = 0x38AAE0u;
    SET_GPR_U32(ctx, 31, 0x38AAE8u);
    ctx->pc = 0x38AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AAE0u;
    // 0x38aae4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A438u, 0x38AAE0u, 0x38AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AAE8u;
label_38aae8:
    // 0x38aae8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x38aae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38aaec:
    // 0x38aaec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x38aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_38aaf0:
    // 0x38aaf0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x38aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x38aaf4: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x38AAF4u;
    {
        const bool branch_taken_0x38aaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AAF4u;
        // 0x38aaf8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aaf4) {
            ctx->pc = 0x38ACDCu;
            goto label_38acdc;
        }
    }
    ctx->pc = 0x38AAFCu;
    // 0x38aafc: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x38aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x38ab00: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x38AB00u;
    {
        const bool branch_taken_0x38ab00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB00u;
        // 0x38ab04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab00) {
            ctx->pc = 0x38ABD4u;
            goto label_38abd4;
        }
    }
    ctx->pc = 0x38AB08u;
    // 0x38ab08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38ab0c: 0x1682000f  bne         $s4, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x38AB0Cu;
    {
        const bool branch_taken_0x38ab0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x38AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB0Cu;
        // 0x38ab10: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab0c) {
            ctx->pc = 0x38AB4Cu;
            goto label_38ab4c;
        }
    }
    ctx->pc = 0x38AB14u;
    // 0x38ab14: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x38ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x38ab18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ab18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab1c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x38ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x38ab20: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38ab20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab24: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38ab24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38ab28: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x38ab28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab2c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38ab30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38ab30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab34: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x38ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x38ab38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38ab38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab3c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38ab40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ab40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab44: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x38AB44u;
    {
        const bool branch_taken_0x38ab44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AB44u;
        // 0x38ab48: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ab44) {
            ctx->pc = 0x38ABC4u;
            goto label_38abc4;
        }
    }
    ctx->pc = 0x38AB4Cu;
label_38ab4c:
    // 0x38ab4c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x38ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x38ab50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab54: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x38ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x38ab58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38ab58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab5c: 0x8e2501cc  lw          $a1, 0x1CC($s1)
    ctx->pc = 0x38ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 460)));
    // 0x38ab60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38ab60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38ab64: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x38ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x38ab68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ab68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab6c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38ab70: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38ab70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ab74: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38ab78: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38ab78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab7c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x38ab7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x38ab80: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x38ab80u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab84: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38AB84u;
    SET_GPR_U32(ctx, 31, 0x38AB8Cu);
    ctx->pc = 0x38AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AB84u;
    // 0x38ab88: 0xafb00018  sw          $s0, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38AB84u, 0x38AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AB8Cu;
label_38ab8c:
    // 0x38ab8c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x38ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x38ab90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ab90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab94: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x38ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x38ab98: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38ab98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ab9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x38ab9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x38aba0: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x38aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x38aba4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38aba8: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x38aba8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38abac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38abacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38abb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38abb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38abb4: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x38abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x38abb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38abb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38abbc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38abbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38abc0: 0x8fc6000c  lw          $a2, 0xC($fp)
    ctx->pc = 0x38abc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_38abc4:
    // 0x38abc4: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38ABC4u;
    SET_GPR_U32(ctx, 31, 0x38ABCCu);
    ctx->pc = 0x38ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ABC4u;
    // 0x38abc8: 0x8c8501cc  lw          $a1, 0x1CC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38ABC4u, 0x38ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ABCCu;
label_38abcc:
    // 0x38abcc: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x38ABCCu;
    {
        const bool branch_taken_0x38abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABCCu;
        // 0x38abd0: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38abcc) {
            ctx->pc = 0x38ACE0u;
            goto label_38ace0;
        }
    }
    ctx->pc = 0x38ABD4u;
label_38abd4:
    // 0x38abd4: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x38ABD4u;
    {
        const bool branch_taken_0x38abd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x38ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ABD4u;
        // 0x38abd8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38abd4) {
            ctx->pc = 0x38AC2Cu;
            goto label_38ac2c;
        }
    }
    ctx->pc = 0x38ABDCu;
    // 0x38abdc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x38abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x38abe0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38ABE0u;
    {
        const bool branch_taken_0x38abe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38abe0) {
            ctx->pc = 0x38ABE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38ABE0u;
            // 0x38abe4: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38ABECu;
            goto label_38abec;
        }
    }
    ctx->pc = 0x38ABE8u;
    // 0x38abe8: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x38abe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_38abec:
    // 0x38abec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x38abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x38abf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38abf4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x38abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x38abf8: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38abf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38abfc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38ac00: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x38ac00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac04: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38ac08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38ac08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac0c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x38ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x38ac10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38ac10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac14: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38ac18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ac18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac1c: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38AC1Cu;
    SET_GPR_U32(ctx, 31, 0x38AC24u);
    ctx->pc = 0x38AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC1Cu;
    // 0x38ac20: 0x24090010  addiu       $t1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38AC1Cu, 0x38AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC24u;
label_38ac24:
    // 0x38ac24: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x38AC24u;
    {
        const bool branch_taken_0x38ac24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC24u;
        // 0x38ac28: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac24) {
            ctx->pc = 0x38ACE0u;
            goto label_38ace0;
        }
    }
    ctx->pc = 0x38AC2Cu;
label_38ac2c:
    // 0x38ac2c: 0x16820027  bne         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x38AC2Cu;
    {
        const bool branch_taken_0x38ac2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x38AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AC2Cu;
        // 0x38ac30: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ac2c) {
            ctx->pc = 0x38ACCCu;
            goto label_38accc;
        }
    }
    ctx->pc = 0x38AC34u;
    // 0x38ac34: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x38ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x38ac38: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38AC38u;
    {
        const bool branch_taken_0x38ac38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ac38) {
            ctx->pc = 0x38AC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AC38u;
            // 0x38ac3c: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AC44u;
            goto label_38ac44;
        }
    }
    ctx->pc = 0x38AC40u;
    // 0x38ac40: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x38ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_38ac44:
    // 0x38ac44: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x38ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x38ac48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac4c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x38ac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x38ac50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38ac50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38ac58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38ac58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac5c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x38ac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x38ac60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x38ac60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac64: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38ac68: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x38ac68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38ac6c: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x38ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x38ac70: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38ac70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac74: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38AC74u;
    SET_GPR_U32(ctx, 31, 0x38AC7Cu);
    ctx->pc = 0x38AC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AC74u;
    // 0x38ac78: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38AC74u, 0x38AC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AC7Cu;
label_38ac7c:
    // 0x38ac7c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x38ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x38ac80: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x38AC80u;
    {
        const bool branch_taken_0x38ac80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ac80) {
            ctx->pc = 0x38AC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38AC80u;
            // 0x38ac84: 0x8e2501dc  lw          $a1, 0x1DC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38AC8Cu;
            goto label_38ac8c;
        }
    }
    ctx->pc = 0x38AC88u;
    // 0x38ac88: 0x8e2501ec  lw          $a1, 0x1EC($s1)
    ctx->pc = 0x38ac88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 492)));
label_38ac8c:
    // 0x38ac8c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x38ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x38ac90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38ac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac94: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x38ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x38ac98: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x38ac98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ac9c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x38ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x38aca0: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x38aca0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38aca4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x38aca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x38aca8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38aca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38acac: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x38acacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
    // 0x38acb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38acb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38acb4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x38acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x38acb8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x38acb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38acbc: 0xc0e2bd8  jal         func_38AF60
    ctx->pc = 0x38ACBCu;
    SET_GPR_U32(ctx, 31, 0x38ACC4u);
    ctx->pc = 0x38ACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ACBCu;
    // 0x38acc0: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AF60u, 0x38ACBCu, 0x38ACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ACC4u;
label_38acc4:
    // 0x38acc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x38ACC4u;
    {
        const bool branch_taken_0x38acc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ACC4u;
        // 0x38acc8: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38acc4) {
            ctx->pc = 0x38ACE0u;
            goto label_38ace0;
        }
    }
    ctx->pc = 0x38ACCCu;
label_38accc:
    // 0x38accc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38acccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38acd0: 0x24a59490  addiu       $a1, $a1, -0x6B70
    ctx->pc = 0x38acd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939792));
    // 0x38acd4: 0xc0e290e  jal         func_38A438
    ctx->pc = 0x38ACD4u;
    SET_GPR_U32(ctx, 31, 0x38ACDCu);
    ctx->pc = 0x38ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ACD4u;
    // 0x38acd8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A438u, 0x38ACD4u, 0x38ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ACDCu;
label_38acdc:
    // 0x38acdc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x38acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_38ace0:
    // 0x38ace0: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x38ace0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x38ace4: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x38ace4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x38ace8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x38ace8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x38acec: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x38acecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x38acf0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x38acf0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x38acf4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x38acf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x38acf8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x38acf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x38acfc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x38acfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38ad00: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x38ad00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38ad04: 0x3e00008  jr          $ra
    ctx->pc = 0x38AD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AD04u;
        // 0x38ad08: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AD0Cu;
    // 0x38ad0c: 0x0  nop
    ctx->pc = 0x38ad0cu;
    // NOP
    ctx->pc = 0x38ad10u;
}
