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

// Function: sub_0021C0A8
// Address: 0x21c0a8 - 0x21c278
void sub_0021C0A8_0x21c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C0A8_0x21c0a8");
#endif

    switch (ctx->pc) {
        case 0x21c108u: goto label_21c108;
        case 0x21c130u: goto label_21c130;
        case 0x21c144u: goto label_21c144;
        case 0x21c168u: goto label_21c168;
        case 0x21c170u: goto label_21c170;
        case 0x21c178u: goto label_21c178;
        case 0x21c18cu: goto label_21c18c;
        case 0x21c1f0u: goto label_21c1f0;
        case 0x21c1f8u: goto label_21c1f8;
        case 0x21c230u: goto label_21c230;
        case 0x21c238u: goto label_21c238;
        default: break;
    }

    ctx->pc = 0x21c0a8u;

    // 0x21c0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21c0ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x21c0b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x21c0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x21c0b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21c0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21c0b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21c0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0bc: 0x8c4395ac  lw          $v1, -0x6A54($v0)
    ctx->pc = 0x21c0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95ACu));
    // 0x21c0c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x21c0c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c0c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x21c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x21c0c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x21c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x21c0cc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x21c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x21c0d0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x21c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21c0d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x21c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x21c0d8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x21c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x21c0dc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x21c0e0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x21c0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x21c0e4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x21c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x21c0e8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x21c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x21c0ec: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x21c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x21c0f0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x21C0F0u;
    {
        const bool branch_taken_0x21c0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0F0u;
        // 0x21c0f4: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0f0) {
            ctx->pc = 0x21C158u;
            goto label_21c158;
        }
    }
    ctx->pc = 0x21C0F8u;
    // 0x21c0f8: 0x3c120006  lui         $s2, 0x6
    ctx->pc = 0x21c0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)6 << 16));
    // 0x21c0fc: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x21c0fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x21c100: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x21c100u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
    // 0x21c104: 0x8e6295a8  lw          $v0, -0x6A58($s3)
    ctx->pc = 0x21c104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F95A8u));
label_21c108:
    // 0x21c108: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x21c108u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21c10c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x21c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21c110: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21c110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c114: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x21C114u;
    {
        const bool branch_taken_0x21c114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C114u;
        // 0x21c118: 0x8e8295ac  lw          $v0, -0x6A54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c114) {
            ctx->pc = 0x21C148u;
            goto label_21c148;
        }
    }
    ctx->pc = 0x21C11Cu;
    // 0x21c11c: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x21c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x21c120: 0x14520009  bne         $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C120u;
    {
        const bool branch_taken_0x21c120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x21C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C120u;
        // 0x21c124: 0x8e8295ac  lw          $v0, -0x6A54($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c120) {
            ctx->pc = 0x21C148u;
            goto label_21c148;
        }
    }
    ctx->pc = 0x21C128u;
    // 0x21c128: 0xc0f791c  jal         func_3DE470
    ctx->pc = 0x21C128u;
    SET_GPR_U32(ctx, 31, 0x21C130u);
    ctx->pc = 0x21C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C128u;
    // 0x21c12c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE470u, 0x21C128u, 0x21C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C130u;
label_21c130:
    // 0x21c130: 0x8e6395a8  lw          $v1, -0x6A58($s3)
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940072)));
    // 0x21c134: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21c138: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x21c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x21c13c: 0xc0f791c  jal         func_3DE470
    ctx->pc = 0x21C13Cu;
    SET_GPR_U32(ctx, 31, 0x21C144u);
    ctx->pc = 0x21C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C13Cu;
    // 0x21c140: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE470u, 0x21C13Cu, 0x21C144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C144u;
label_21c144:
    // 0x21c144: 0x8e8295ac  lw          $v0, -0x6A54($s4)
    ctx->pc = 0x21c144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294940076)));
label_21c148:
    // 0x21c148: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21c148u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21c14c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x21c14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21c150: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21C150u;
    {
        const bool branch_taken_0x21c150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C150u;
        // 0x21c154: 0x8e6295a8  lw          $v0, -0x6A58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294940072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c150) {
            ctx->pc = 0x21C108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c108;
        }
    }
    ctx->pc = 0x21C158u;
label_21c158:
    // 0x21c158: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c15c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x21c15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c160: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21C160u;
    {
        const bool branch_taken_0x21c160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C160u;
        // 0x21c164: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c160) {
            ctx->pc = 0x21C1B8u;
            goto label_21c1b8;
        }
    }
    ctx->pc = 0x21C168u;
label_21c168:
    // 0x21c168: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21C168u;
    {
        const bool branch_taken_0x21c168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C168u;
        // 0x21c16c: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c168) {
            ctx->pc = 0x21C18Cu;
            goto label_21c18c;
        }
    }
    ctx->pc = 0x21C170u;
label_21c170:
    // 0x21c170: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21C170u;
    SET_GPR_U32(ctx, 31, 0x21C178u);
    ctx->pc = 0x21C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C170u;
    // 0x21c174: 0x26240324  addiu       $a0, $s1, 0x324 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21C170u, 0x21C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C178u;
label_21c178:
    // 0x21c178: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c17c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C17Cu;
    {
        const bool branch_taken_0x21c17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C17Cu;
        // 0x21c180: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c17c) {
            ctx->pc = 0x21C18Cu;
            goto label_21c18c;
        }
    }
    ctx->pc = 0x21C184u;
    // 0x21c184: 0xc0999d6  jal         func_266758
    ctx->pc = 0x21C184u;
    SET_GPR_U32(ctx, 31, 0x21C18Cu);
    ctx->pc = 0x21C188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C184u;
    // 0x21c188: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266758u, 0x21C184u, 0x21C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C18Cu;
label_21c18c:
    // 0x21c18c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x21c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x21c190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21c190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c194: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C194u;
    {
        const bool branch_taken_0x21c194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C194u;
        // 0x21c198: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c194) {
            ctx->pc = 0x21C1A0u;
            goto label_21c1a0;
        }
    }
    ctx->pc = 0x21C19Cu;
    // 0x21c19c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21c19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c1a0:
    // 0x21c1a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C1A0u;
    {
        const bool branch_taken_0x21c1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1A0u;
        // 0x21c1a4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1a0) {
            ctx->pc = 0x21C1B0u;
            goto label_21c1b0;
        }
    }
    ctx->pc = 0x21C1A8u;
    // 0x21c1a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21c1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x21c1ac: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x21c1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_21c1b0:
    // 0x21c1b0: 0x5600ffef  bnel        $s0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x21C1B0u;
    {
        const bool branch_taken_0x21c1b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c1b0) {
            ctx->pc = 0x21C1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C1B0u;
            // 0x21c1b4: 0x8e0500f8  lw          $a1, 0xF8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c170;
        }
    }
    ctx->pc = 0x21C1B8u;
label_21c1b8:
    // 0x21c1b8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x21c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21c1bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21C1BCu;
    {
        const bool branch_taken_0x21c1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1BCu;
        // 0x21c1c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1bc) {
            ctx->pc = 0x21C1C8u;
            goto label_21c1c8;
        }
    }
    ctx->pc = 0x21C1C4u;
    // 0x21c1c4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21c1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c1c8:
    // 0x21c1c8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x21c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x21c1cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21C1CCu;
    {
        const bool branch_taken_0x21c1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c1cc) {
            ctx->pc = 0x21C1DCu;
            goto label_21c1dc;
        }
    }
    ctx->pc = 0x21C1D4u;
    // 0x21c1d4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x21c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21c1d8: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x21c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_21c1dc:
    // 0x21c1dc: 0x1620ffe2  bnez        $s1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x21C1DCu;
    {
        const bool branch_taken_0x21c1dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1DCu;
        // 0x21c1e0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1dc) {
            ctx->pc = 0x21C168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c168;
        }
    }
    ctx->pc = 0x21C1E4u;
    // 0x21c1e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21C1E4u;
    {
        const bool branch_taken_0x21c1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C1E4u;
        // 0x21c1e8: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1e4) {
            ctx->pc = 0x21C208u;
            goto label_21c208;
        }
    }
    ctx->pc = 0x21C1ECu;
    // 0x21c1ec: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x21c1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_21c1f0:
    // 0x21c1f0: 0xc0f78f8  jal         func_3DE3E0
    ctx->pc = 0x21C1F0u;
    SET_GPR_U32(ctx, 31, 0x21C1F8u);
    ctx->pc = 0x21C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C1F0u;
    // 0x21c1f4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE3E0u, 0x21C1F0u, 0x21C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C1F8u;
label_21c1f8:
    // 0x21c1f8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x21c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x21c1fc: 0x0  nop
    ctx->pc = 0x21c1fcu;
    // NOP
    // 0x21c200: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21C200u;
    {
        const bool branch_taken_0x21c200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C200u;
        // 0x21c204: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c200) {
            ctx->pc = 0x21C1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c1f0;
        }
    }
    ctx->pc = 0x21C208u;
label_21c208:
    // 0x21c208: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x21c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x21c20c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x21c20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c210: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x21c210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x21c214: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x21c214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x21c218: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x21c218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x21c21c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x21c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x21c220: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21C220u;
    {
        const bool branch_taken_0x21c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C220u;
        // 0x21c224: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c220) {
            ctx->pc = 0x21C248u;
            goto label_21c248;
        }
    }
    ctx->pc = 0x21C228u;
    // 0x21c228: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x21c228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21c22c: 0x0  nop
    ctx->pc = 0x21c22cu;
    // NOP
label_21c230:
    // 0x21c230: 0xc0f78f8  jal         func_3DE3E0
    ctx->pc = 0x21C230u;
    SET_GPR_U32(ctx, 31, 0x21C238u);
    ctx->pc = 0x21C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21C230u;
    // 0x21c234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE3E0u, 0x21C230u, 0x21C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C238u;
label_21c238:
    // 0x21c238: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21c238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21c23c: 0x0  nop
    ctx->pc = 0x21c23cu;
    // NOP
    // 0x21c240: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21C240u;
    {
        const bool branch_taken_0x21c240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c240) {
            ctx->pc = 0x21C244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C240u;
            // 0x21c244: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c230;
        }
    }
    ctx->pc = 0x21C248u;
label_21c248:
    // 0x21c248: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x21c248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x21c24c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x21c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21c250: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x21c250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21c254: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x21c254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x21c258: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x21c258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c25c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x21c25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21c260: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x21c260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c264: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x21c264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c268: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21c268u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21c26c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21c26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21c270: 0x3e00008  jr          $ra
    ctx->pc = 0x21C270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C270u;
        // 0x21c274: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C278u;
}
