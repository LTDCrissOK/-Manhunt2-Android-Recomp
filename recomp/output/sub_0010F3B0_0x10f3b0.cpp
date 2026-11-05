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

// Function: sub_0010F3B0
// Address: 0x10f3b0 - 0x10f510
void sub_0010F3B0_0x10f3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F3B0_0x10f3b0");
#endif

    switch (ctx->pc) {
        case 0x10f4a8u: goto label_10f4a8;
        case 0x10f4c0u: goto label_10f4c0;
        case 0x10f4ccu: goto label_10f4cc;
        case 0x10f4f4u: goto label_10f4f4;
        case 0x10f500u: goto label_10f500;
        default: break;
    }

    ctx->pc = 0x10f3b0u;

    // 0x10f3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f3b4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10f3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10f3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10f3bc: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10f3c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10f3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10f3c4: 0xac8500e0  sw          $a1, 0xE0($a0)
    ctx->pc = 0x10f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 5));
    // 0x10f3c8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10f3cc: 0x8c8700e4  lw          $a3, 0xE4($a0)
    ctx->pc = 0x10f3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x10f3d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10f3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10f3d4: 0xac8000e4  sw          $zero, 0xE4($a0)
    ctx->pc = 0x10f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
    // 0x10f3d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10f3dc: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x10f3dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10f3e0: 0x52000048  beql        $s0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x10F3E0u;
    {
        const bool branch_taken_0x10f3e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f3e0) {
            ctx->pc = 0x10F3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F3E0u;
            // 0x10f3e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F3E8u;
    // 0x10f3e8: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x10F3E8u;
    {
        const bool branch_taken_0x10f3e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f3e8) {
            ctx->pc = 0x10F46Cu;
            goto label_10f46c;
        }
    }
    ctx->pc = 0x10F3F0u;
    // 0x10f3f0: 0x50e00044  beql        $a3, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x10F3F0u;
    {
        const bool branch_taken_0x10f3f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f3f0) {
            ctx->pc = 0x10F3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F3F0u;
            // 0x10f3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F3F8u;
    // 0x10f3f8: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x10f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x10f3fc: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x10F3FCu;
    {
        const bool branch_taken_0x10f3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f3fc) {
            ctx->pc = 0x10F400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F3FCu;
            // 0x10f400: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F404u;
    // 0x10f404: 0x8c8200e8  lw          $v0, 0xE8($a0)
    ctx->pc = 0x10f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x10f408: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x10F408u;
    {
        const bool branch_taken_0x10f408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f408) {
            ctx->pc = 0x10F40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F408u;
            // 0x10f40c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F410u;
    // 0x10f410: 0xde041020  ld          $a0, 0x1020($s0)
    ctx->pc = 0x10f410u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x10f414: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10f414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f418: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x10f418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x10f41c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f420: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x10F420u;
    {
        const bool branch_taken_0x10f420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f420) {
            ctx->pc = 0x10F424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F420u;
            // 0x10f424: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F428u;
    // 0x10f428: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f42c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x10f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x10f430: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f434: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x10F434u;
    {
        const bool branch_taken_0x10f434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f434) {
            ctx->pc = 0x10F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F434u;
            // 0x10f438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F43Cu;
    // 0x10f43c: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x10f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x10f440: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10f444: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x10f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x10f448: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x10f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x10f44c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x10f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x10f450: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10f454: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x10f454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x10f458: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x10f458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x10f45c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x10f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x10f460: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10f460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10f464: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10F464u;
    {
        const bool branch_taken_0x10f464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F464u;
        // 0x10f468: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f464) {
            ctx->pc = 0x10F500u;
            goto label_10f500;
        }
    }
    ctx->pc = 0x10F46Cu;
label_10f46c:
    // 0x10f46c: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x10F46Cu;
    {
        const bool branch_taken_0x10f46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F46Cu;
        // 0x10f470: 0xac8600e4  sw          $a2, 0xE4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f46c) {
            ctx->pc = 0x10F500u;
            goto label_10f500;
        }
    }
    ctx->pc = 0x10F474u;
    // 0x10f474: 0x54e00023  bnel        $a3, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x10F474u;
    {
        const bool branch_taken_0x10f474 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f474) {
            ctx->pc = 0x10F478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F474u;
            // 0x10f478: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F47Cu;
    // 0x10f47c: 0x8c820244  lw          $v0, 0x244($a0)
    ctx->pc = 0x10f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x10f480: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x10F480u;
    {
        const bool branch_taken_0x10f480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f480) {
            ctx->pc = 0x10F484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F480u;
            // 0x10f484: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F488u;
    // 0x10f488: 0x8c8200e8  lw          $v0, 0xE8($a0)
    ctx->pc = 0x10f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
    // 0x10f48c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x10F48Cu;
    {
        const bool branch_taken_0x10f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f48c) {
            ctx->pc = 0x10F490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F48Cu;
            // 0x10f490: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F494u;
    // 0x10f494: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x10f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x10f498: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x10F498u;
    {
        const bool branch_taken_0x10f498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f498) {
            ctx->pc = 0x10F49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F498u;
            // 0x10f49c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F504u;
            goto label_10f504;
        }
    }
    ctx->pc = 0x10F4A0u;
    // 0x10f4a0: 0xc044f48  jal         func_113D20
    ctx->pc = 0x10F4A0u;
    SET_GPR_U32(ctx, 31, 0x10F4A8u);
    ctx->pc = 0x113D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D20u, 0x10F4A0u, 0x10F4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4A8u;
label_10f4a8:
    // 0x10f4a8: 0x8e02041c  lw          $v0, 0x41C($s0)
    ctx->pc = 0x10f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
    // 0x10f4ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10f4b0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x10f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x10f4b4: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x10f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
    // 0x10f4b8: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x10F4B8u;
    SET_GPR_U32(ctx, 31, 0x10F4C0u);
    ctx->pc = 0x10F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4B8u;
    // 0x10f4bc: 0xae020420  sw          $v0, 0x420($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1056), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x10F4B8u, 0x10F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4C0u;
label_10f4c0:
    // 0x10f4c0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x10f4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x10f4c4: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x10F4C4u;
    SET_GPR_U32(ctx, 31, 0x10F4CCu);
    ctx->pc = 0x10F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4C4u;
    // 0x10f4c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x10F4C4u, 0x10F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4CCu;
label_10f4cc:
    // 0x10f4cc: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x10f4ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x10f4d0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x10f4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f4d4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x10f4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x10f4d8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x10f4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x10f4dc: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x10f4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x10f4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10f4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10f4e8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x10f4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x10f4ec: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x10F4ECu;
    SET_GPR_U32(ctx, 31, 0x10F4F4u);
    ctx->pc = 0x10F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4ECu;
    // 0x10f4f0: 0xfe031020  sd          $v1, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x10F4ECu, 0x10F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F4F4u;
label_10f4f4:
    // 0x10f4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10f4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f4f8: 0xc0944da  jal         func_251368
    ctx->pc = 0x10F4F8u;
    SET_GPR_U32(ctx, 31, 0x10F500u);
    ctx->pc = 0x10F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F4F8u;
    // 0x10f4fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x10F4F8u, 0x10F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F500u;
label_10f500:
    // 0x10f500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10f500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f504:
    // 0x10f504: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10f504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10f508: 0x3e00008  jr          $ra
    ctx->pc = 0x10F508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F508u;
        // 0x10f50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F510u;
}
