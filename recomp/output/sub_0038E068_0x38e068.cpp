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

// Function: sub_0038E068
// Address: 0x38e068 - 0x38e380
void sub_0038E068_0x38e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E068_0x38e068");
#endif

    switch (ctx->pc) {
        case 0x38e0dcu: goto label_38e0dc;
        case 0x38e148u: goto label_38e148;
        case 0x38e15cu: goto label_38e15c;
        case 0x38e174u: goto label_38e174;
        case 0x38e18cu: goto label_38e18c;
        default: break;
    }

    ctx->pc = 0x38e068u;

    // 0x38e068: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x38e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x38e06c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x38e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x38e070: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x38e074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38e074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e078: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x38e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x38e07c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x38e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x38e080: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x38e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x38e084: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38e084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38e088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38e08c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x38e090: 0x8e720040  lw          $s2, 0x40($s3)
    ctx->pc = 0x38e090u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x38e094: 0x8e450858  lw          $a1, 0x858($s2)
    ctx->pc = 0x38e094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x38e098: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x38E098u;
    {
        const bool branch_taken_0x38e098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x38e098) {
            ctx->pc = 0x38E09Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38E098u;
            // 0x38e09c: 0x8e420134  lw          $v0, 0x134($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38E0C8u;
            goto label_38e0c8;
        }
    }
    ctx->pc = 0x38E0A0u;
    // 0x38e0a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e0a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38e0a8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x38e0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38e0ac: 0xae430184  sw          $v1, 0x184($s2)
    ctx->pc = 0x38e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 388), GPR_U32(ctx, 3));
    // 0x38e0b0: 0xae42018c  sw          $v0, 0x18C($s2)
    ctx->pc = 0x38e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
    // 0x38e0b4: 0xae440154  sw          $a0, 0x154($s2)
    ctx->pc = 0x38e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 4));
    // 0x38e0b8: 0xae42014c  sw          $v0, 0x14C($s2)
    ctx->pc = 0x38e0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 2));
    // 0x38e0bc: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x38e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
    // 0x38e0c0: 0xae420198  sw          $v0, 0x198($s2)
    ctx->pc = 0x38e0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 2));
    // 0x38e0c4: 0x8e420134  lw          $v0, 0x134($s2)
    ctx->pc = 0x38e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 308)));
label_38e0c8:
    // 0x38e0c8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x38e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x38e0cc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x38e0ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x38e0d0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x38E0D0u;
    {
        const bool branch_taken_0x38e0d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0D0u;
        // 0x38e0d4: 0xae42013c  sw          $v0, 0x13C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0d0) {
            ctx->pc = 0x38E0F4u;
            goto label_38e0f4;
        }
    }
    ctx->pc = 0x38E0D8u;
    // 0x38e0d8: 0x8e42014c  lw          $v0, 0x14C($s2)
    ctx->pc = 0x38e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 332)));
label_38e0dc:
    // 0x38e0dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E0DCu;
    {
        const bool branch_taken_0x38e0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0DCu;
        // 0x38e0e0: 0x8e420138  lw          $v0, 0x138($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0dc) {
            ctx->pc = 0x38E0F8u;
            goto label_38e0f8;
        }
    }
    ctx->pc = 0x38E0E4u;
    // 0x38e0e4: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x38e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x38e0e8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x38e0e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x38e0ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38E0ECu;
    {
        const bool branch_taken_0x38e0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E0ECu;
        // 0x38e0f0: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e0ec) {
            ctx->pc = 0x38E100u;
            goto label_38e100;
        }
    }
    ctx->pc = 0x38E0F4u;
label_38e0f4:
    // 0x38e0f4: 0x8e420138  lw          $v0, 0x138($s2)
    ctx->pc = 0x38e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_38e0f8:
    // 0x38e0f8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x38e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x38e0fc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x38e0fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_38e100:
    // 0x38e100: 0xae420140  sw          $v0, 0x140($s2)
    ctx->pc = 0x38e100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 2));
    // 0x38e104: 0x2a900  sll         $s5, $v0, 4
    ctx->pc = 0x38e104u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38e108: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x38e108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x38e10c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38e110: 0x2a100  sll         $s4, $v0, 4
    ctx->pc = 0x38e110u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x38e114: 0x16830004  bne         $s4, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E114u;
    {
        const bool branch_taken_0x38e114 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x38E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E114u;
        // 0x38e118: 0x24160180  addiu       $s6, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e114) {
            ctx->pc = 0x38E128u;
            goto label_38e128;
        }
    }
    ctx->pc = 0x38E11Cu;
    // 0x38e11c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38e120: 0x12a2008d  beq         $s5, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x38E120u;
    {
        const bool branch_taken_0x38e120 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x38E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E120u;
        // 0x38e124: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e120) {
            ctx->pc = 0x38E358u;
            goto label_38e358;
        }
    }
    ctx->pc = 0x38E128u;
label_38e128:
    // 0x38e128: 0x26510118  addiu       $s1, $s2, 0x118
    ctx->pc = 0x38e128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x38e12c: 0x2b68018  mult        $s0, $s5, $s6
    ctx->pc = 0x38e12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x38e130: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x38e130u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x38e134: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x38e134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
    // 0x38e138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e13c: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x38e13cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x38e140: 0xc0e18ba  jal         func_3862E8
    ctx->pc = 0x38E140u;
    SET_GPR_U32(ctx, 31, 0x38E148u);
    ctx->pc = 0x38E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E140u;
    // 0x38e144: 0x108202  srl         $s0, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3862E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3862E8u, 0x38E140u, 0x38E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E148u;
label_38e148:
    // 0x38e148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e14c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e150: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e154: 0xc0e18be  jal         func_3862F8
    ctx->pc = 0x38E154u;
    SET_GPR_U32(ctx, 31, 0x38E15Cu);
    ctx->pc = 0x38E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E154u;
    // 0x38e158: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3862F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3862F8u, 0x38E154u, 0x38E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E15Cu;
label_38e15c:
    // 0x38e15c: 0xae42010c  sw          $v0, 0x10C($s2)
    ctx->pc = 0x38e15cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 2));
    // 0x38e160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e164: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e168: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e16c: 0xc0e18be  jal         func_3862F8
    ctx->pc = 0x38E16Cu;
    SET_GPR_U32(ctx, 31, 0x38E174u);
    ctx->pc = 0x38E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E16Cu;
    // 0x38e170: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3862F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3862F8u, 0x38E16Cu, 0x38E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E174u;
label_38e174:
    // 0x38e174: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x38e174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x38e178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38e178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e17c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38e17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e184: 0xc0e18be  jal         func_3862F8
    ctx->pc = 0x38E184u;
    SET_GPR_U32(ctx, 31, 0x38E18Cu);
    ctx->pc = 0x38E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E184u;
    // 0x38e188: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3862F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3862F8u, 0x38E184u, 0x38E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E18Cu;
label_38e18c:
    // 0x38e18c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x38e18cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e190: 0x8e43087c  lw          $v1, 0x87C($s2)
    ctx->pc = 0x38e190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2172)));
    // 0x38e194: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x38E194u;
    {
        const bool branch_taken_0x38e194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E194u;
        // 0x38e198: 0xae480114  sw          $t0, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e194) {
            ctx->pc = 0x38E220u;
            goto label_38e220;
        }
    }
    ctx->pc = 0x38E19Cu;
    // 0x38e19c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x38e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38e1a0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x38e1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x38e1a4: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x38e1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38e1a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38e1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38e1ac: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x38e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x38e1b0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x38e1b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x38e1b4: 0xc43018  mult        $a2, $a2, $a0
    ctx->pc = 0x38e1b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x38e1b8: 0x8e430110  lw          $v1, 0x110($s2)
    ctx->pc = 0x38e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x38e1bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x38e1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x38e1c0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x38e1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38e1c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x38e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38e1c8: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x38e1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x38e1cc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x38e1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x38e1d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38e1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x38e1d4: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x38e1d4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x38e1d8: 0x24c201ff  addiu       $v0, $a2, 0x1FF
    ctx->pc = 0x38e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 511));
    // 0x38e1dc: 0xc7100b  movn        $v0, $a2, $a3
    ctx->pc = 0x38e1dcu;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x38e1e0: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x38e1e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x38e1e4: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x38e1e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x38e1e8: 0xae4501f8  sw          $a1, 0x1F8($s2)
    ctx->pc = 0x38e1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 5));
    // 0x38e1ec: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x38e1ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38e1f0: 0xae430260  sw          $v1, 0x260($s2)
    ctx->pc = 0x38e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 3));
    // 0x38e1f4: 0xae450330  sw          $a1, 0x330($s2)
    ctx->pc = 0x38e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 5));
    // 0x38e1f8: 0xae430398  sw          $v1, 0x398($s2)
    ctx->pc = 0x38e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 3));
    // 0x38e1fc: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x38e1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x38e200: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x38e200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x38e204: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38e204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38e208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38e208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38e20c: 0xae450468  sw          $a1, 0x468($s2)
    ctx->pc = 0x38e20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 5));
    // 0x38e210: 0xae4304d0  sw          $v1, 0x4D0($s2)
    ctx->pc = 0x38e210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 3));
    // 0x38e214: 0xae440538  sw          $a0, 0x538($s2)
    ctx->pc = 0x38e214u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 4));
    // 0x38e218: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x38E218u;
    {
        const bool branch_taken_0x38e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E218u;
        // 0x38e21c: 0xae480400  sw          $t0, 0x400($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e218) {
            ctx->pc = 0x38E288u;
            goto label_38e288;
        }
    }
    ctx->pc = 0x38E220u;
label_38e220:
    // 0x38e220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e224: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38E224u;
    {
        const bool branch_taken_0x38e224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x38E228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E224u;
        // 0x38e228: 0x143103  sra         $a2, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e224) {
            ctx->pc = 0x38E28Cu;
            goto label_38e28c;
        }
    }
    ctx->pc = 0x38E22Cu;
    // 0x38e22c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x38e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38e230: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x38e230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38e234: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x38e234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38e238: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x38e238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x38e23c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x38e23cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x38e240: 0x8e450110  lw          $a1, 0x110($s2)
    ctx->pc = 0x38e240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x38e244: 0xae4601f8  sw          $a2, 0x1F8($s2)
    ctx->pc = 0x38e244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 504), GPR_U32(ctx, 6));
    // 0x38e248: 0xae450260  sw          $a1, 0x260($s2)
    ctx->pc = 0x38e248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 608), GPR_U32(ctx, 5));
    // 0x38e24c: 0xae460330  sw          $a2, 0x330($s2)
    ctx->pc = 0x38e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 6));
    // 0x38e250: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x38e250u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38e254: 0x246201ff  addiu       $v0, $v1, 0x1FF
    ctx->pc = 0x38e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 511));
    // 0x38e258: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x38e258u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x38e25c: 0xae450398  sw          $a1, 0x398($s2)
    ctx->pc = 0x38e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 920), GPR_U32(ctx, 5));
    // 0x38e260: 0x21243  sra         $v0, $v0, 9
    ctx->pc = 0x38e260u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 9));
    // 0x38e264: 0xae4802c8  sw          $t0, 0x2C8($s2)
    ctx->pc = 0x38e264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 712), GPR_U32(ctx, 8));
    // 0x38e268: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x38e268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x38e26c: 0xae480400  sw          $t0, 0x400($s2)
    ctx->pc = 0x38e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1024), GPR_U32(ctx, 8));
    // 0x38e270: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x38e270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x38e274: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x38e274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x38e278: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x38e278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x38e27c: 0xae460468  sw          $a2, 0x468($s2)
    ctx->pc = 0x38e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 6));
    // 0x38e280: 0xae4504d0  sw          $a1, 0x4D0($s2)
    ctx->pc = 0x38e280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1232), GPR_U32(ctx, 5));
    // 0x38e284: 0xae430538  sw          $v1, 0x538($s2)
    ctx->pc = 0x38e284u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1336), GPR_U32(ctx, 3));
label_38e288:
    // 0x38e288: 0x143103  sra         $a2, $s4, 4
    ctx->pc = 0x38e288u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 4));
label_38e28c:
    // 0x38e28c: 0x264201f8  addiu       $v0, $s2, 0x1F8
    ctx->pc = 0x38e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 504));
    // 0x38e290: 0x153903  sra         $a3, $s5, 4
    ctx->pc = 0x38e290u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 21), 4));
    // 0x38e294: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x38e294u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
    // 0x38e298: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x38e298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x38e29c: 0x26430260  addiu       $v1, $s2, 0x260
    ctx->pc = 0x38e29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 608));
    // 0x38e2a0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x38e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x38e2a4: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x38e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x38e2a8: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x38e2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x38e2ac: 0x45143  sra         $t2, $a0, 5
    ctx->pc = 0x38e2acu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 4), 5));
    // 0x38e2b0: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x38e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x38e2b4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x38e2b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x38e2b8: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x38e2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x38e2bc: 0x264202c8  addiu       $v0, $s2, 0x2C8
    ctx->pc = 0x38e2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 712));
    // 0x38e2c0: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x38e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x38e2c4: 0x26450330  addiu       $a1, $s2, 0x330
    ctx->pc = 0x38e2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x38e2c8: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x38e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
    // 0x38e2cc: 0x26480468  addiu       $t0, $s2, 0x468
    ctx->pc = 0x38e2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1128));
    // 0x38e2d0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x38e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x38e2d4: 0x264904d0  addiu       $t1, $s2, 0x4D0
    ctx->pc = 0x38e2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1232));
    // 0x38e2d8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x38e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x38e2dc: 0x26430398  addiu       $v1, $s2, 0x398
    ctx->pc = 0x38e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 920));
    // 0x38e2e0: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x38e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x38e2e4: 0x26470400  addiu       $a3, $s2, 0x400
    ctx->pc = 0x38e2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
    // 0x38e2e8: 0xac550008  sw          $s5, 0x8($v0)
    ctx->pc = 0x38e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 21));
    // 0x38e2ec: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x38e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x38e2f0: 0xacaa0010  sw          $t2, 0x10($a1)
    ctx->pc = 0x38e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 10));
    // 0x38e2f4: 0x26420538  addiu       $v0, $s2, 0x538
    ctx->pc = 0x38e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1336));
    // 0x38e2f8: 0xacb40004  sw          $s4, 0x4($a1)
    ctx->pc = 0x38e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 20));
    // 0x38e2fc: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x38e2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x38e300: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x38e300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x38e304: 0xac6a0010  sw          $t2, 0x10($v1)
    ctx->pc = 0x38e304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 10));
    // 0x38e308: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x38e308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
    // 0x38e30c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x38e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x38e310: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x38e310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x38e314: 0xacea0010  sw          $t2, 0x10($a3)
    ctx->pc = 0x38e314u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 10));
    // 0x38e318: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x38e318u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
    // 0x38e31c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x38e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
    // 0x38e320: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x38e320u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x38e324: 0xad0a0010  sw          $t2, 0x10($t0)
    ctx->pc = 0x38e324u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 10));
    // 0x38e328: 0xad140004  sw          $s4, 0x4($t0)
    ctx->pc = 0x38e328u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 20));
    // 0x38e32c: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x38e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
    // 0x38e330: 0xad06000c  sw          $a2, 0xC($t0)
    ctx->pc = 0x38e330u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
    // 0x38e334: 0xad2a0010  sw          $t2, 0x10($t1)
    ctx->pc = 0x38e334u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 10));
    // 0x38e338: 0xad340004  sw          $s4, 0x4($t1)
    ctx->pc = 0x38e338u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 20));
    // 0x38e33c: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x38e33cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 4));
    // 0x38e340: 0xad26000c  sw          $a2, 0xC($t1)
    ctx->pc = 0x38e340u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x38e344: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x38e344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
    // 0x38e348: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x38e348u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x38e34c: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x38e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x38e350: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x38e350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x38e354: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38e354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38e358:
    // 0x38e358: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x38e358u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38e35c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x38e35cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e360: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x38e360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e364: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x38e364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e368: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38e368u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e36c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38e36cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e374: 0x3e00008  jr          $ra
    ctx->pc = 0x38E374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E374u;
        // 0x38e378: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E37Cu;
    // 0x38e37c: 0x0  nop
    ctx->pc = 0x38e37cu;
    // NOP
    ctx->pc = 0x38e380u;
}
