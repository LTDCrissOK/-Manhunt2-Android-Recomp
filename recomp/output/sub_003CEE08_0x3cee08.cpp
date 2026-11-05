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

// Function: sub_003CEE08
// Address: 0x3cee08 - 0x3cefd8
void sub_003CEE08_0x3cee08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CEE08_0x3cee08");
#endif

    switch (ctx->pc) {
        case 0x3cee48u: goto label_3cee48;
        case 0x3cee60u: goto label_3cee60;
        case 0x3cee88u: goto label_3cee88;
        case 0x3ceef4u: goto label_3ceef4;
        case 0x3cef34u: goto label_3cef34;
        case 0x3cef44u: goto label_3cef44;
        case 0x3cef4cu: goto label_3cef4c;
        case 0x3cef60u: goto label_3cef60;
        case 0x3cef70u: goto label_3cef70;
        case 0x3cef80u: goto label_3cef80;
        case 0x3cef88u: goto label_3cef88;
        default: break;
    }

    ctx->pc = 0x3cee08u;

    // 0x3cee08: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3cee08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3cee0c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3cee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3cee10: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3cee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3cee14: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3cee14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cee18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee1c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x3cee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x3cee20: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3cee20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3cee24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cee24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee28: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3cee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x3cee2c: 0x3c170066  lui         $s7, 0x66
    ctx->pc = 0x3cee2cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)102 << 16));
    // 0x3cee30: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3cee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3cee34: 0x26f33940  addiu       $s3, $s7, 0x3940
    ctx->pc = 0x3cee34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 14656));
    // 0x3cee38: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3cee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3cee3c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3cee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3cee40: 0xc0f379c  jal         func_3CDE70
    ctx->pc = 0x3CEE40u;
    SET_GPR_U32(ctx, 31, 0x3CEE48u);
    ctx->pc = 0x3CEE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEE40u;
    // 0x3cee44: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDE70u, 0x3CEE40u, 0x3CEE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEE48u;
label_3cee48:
    // 0x3cee48: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cee48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cee4c: 0x8c43d68c  lw          $v1, -0x2974($v0)
    ctx->pc = 0x3cee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42D68Cu));
    // 0x3cee50: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEE50u;
    {
        const bool branch_taken_0x3cee50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cee50) {
            ctx->pc = 0x3CEE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEE50u;
            // 0x3cee54: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEE64u;
            goto label_3cee64;
        }
    }
    ctx->pc = 0x3CEE58u;
    // 0x3cee58: 0xc0f37be  jal         func_3CDEF8
    ctx->pc = 0x3CEE58u;
    SET_GPR_U32(ctx, 31, 0x3CEE60u);
    ctx->pc = 0x3CDEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEF8u, 0x3CEE58u, 0x3CEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEE60u;
label_3cee60:
    // 0x3cee60: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3cee60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3cee64:
    // 0x3cee64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3cee64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cee68: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x3cee68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3cee6c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CEE6Cu;
    {
        const bool branch_taken_0x3cee6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEE6Cu;
        // 0x3cee70: 0xa262000c  sb          $v0, 0xC($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee6c) {
            ctx->pc = 0x3CEEB4u;
            goto label_3ceeb4;
        }
    }
    ctx->pc = 0x3CEE74u;
    // 0x3cee74: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3cee74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3cee78: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3cee78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cee7c: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3cee7cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3cee80: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3cee80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3cee84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cee84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cee88:
    // 0x3cee88: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x3cee88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3cee8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3CEE8Cu;
    {
        const bool branch_taken_0x3cee8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEE8Cu;
        // 0x3cee90: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee8c) {
            ctx->pc = 0x3CEEC4u;
            goto label_3ceec4;
        }
    }
    ctx->pc = 0x3CEE94u;
    // 0x3cee94: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x3cee94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x3cee98: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3cee98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cee9c: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x3cee9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ceea0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3ceea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3ceea4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3CEEA4u;
    {
        const bool branch_taken_0x3ceea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ceea4) {
            ctx->pc = 0x3CEEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEEA4u;
            // 0x3ceea8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cee88;
        }
    }
    ctx->pc = 0x3CEEACu;
    // 0x3ceeac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CEEACu;
    {
        const bool branch_taken_0x3ceeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEEACu;
        // 0x3ceeb0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceeac) {
            ctx->pc = 0x3CEEC8u;
            goto label_3ceec8;
        }
    }
    ctx->pc = 0x3CEEB4u;
label_3ceeb4:
    // 0x3ceeb4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3ceeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3ceeb8: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3ceeb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3ceebc: 0x3c150066  lui         $s5, 0x66
    ctx->pc = 0x3ceebcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)102 << 16));
    // 0x3ceec0: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3ceec0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
label_3ceec4:
    // 0x3ceec4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3ceec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3ceec8:
    // 0x3ceec8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CEEC8u;
    {
        const bool branch_taken_0x3ceec8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEEC8u;
        // 0x3ceecc: 0x24a21dc8  addiu       $v0, $a1, 0x1DC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceec8) {
            ctx->pc = 0x3CEED8u;
            goto label_3ceed8;
        }
    }
    ctx->pc = 0x3CEED0u;
    // 0x3ceed0: 0xa260040b  sb          $zero, 0x40B($s3)
    ctx->pc = 0x3ceed0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ceed4: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x3ceed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_3ceed8:
    // 0x3ceed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ceed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ceedc: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3ceedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x3ceee0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3ceee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ceee4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3ceee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3ceee8: 0x26944580  addiu       $s4, $s4, 0x4580
    ctx->pc = 0x3ceee8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17792));
    // 0x3ceeec: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CEEECu;
    SET_GPR_U32(ctx, 31, 0x3CEEF4u);
    ctx->pc = 0x3CEEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEEECu;
    // 0x3ceef0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CEEECu, 0x3CEEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEEF4u;
label_3ceef4:
    // 0x3ceef4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ceef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceef8: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3ceef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3ceefc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ceefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cef00: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x3cef00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
    // 0x3cef04: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3cef04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3cef08: 0x26a45040  addiu       $a0, $s5, 0x5040
    ctx->pc = 0x3cef08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20544));
    // 0x3cef0c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cef0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cef10: 0x26e73940  addiu       $a3, $s7, 0x3940
    ctx->pc = 0x3cef10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 14656));
    // 0x3cef14: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x3cef14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x3cef18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cef18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cef1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3cef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3cef20: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3cef20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cef24: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3cef24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3cef28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3cef28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cef2c: 0xc0f3640  jal         func_3CD900
    ctx->pc = 0x3CEF2Cu;
    SET_GPR_U32(ctx, 31, 0x3CEF34u);
    ctx->pc = 0x3CEF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF2Cu;
    // 0x3cef30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD900u, 0x3CEF2Cu, 0x3CEF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF34u;
label_3cef34:
    // 0x3cef34: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CEF34u;
    {
        const bool branch_taken_0x3cef34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CEF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEF34u;
        // 0x3cef38: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cef34) {
            ctx->pc = 0x3CEF54u;
            goto label_3cef54;
        }
    }
    ctx->pc = 0x3CEF3Cu;
    // 0x3cef3c: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CEF3Cu;
    SET_GPR_U32(ctx, 31, 0x3CEF44u);
    ctx->pc = 0x3CEF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF3Cu;
    // 0x3cef40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CEF3Cu, 0x3CEF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF44u;
label_3cef44:
    // 0x3cef44: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CEF44u;
    SET_GPR_U32(ctx, 31, 0x3CEF4Cu);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CEF44u, 0x3CEF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF4Cu;
label_3cef4c:
    // 0x3cef4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3CEF4Cu;
    {
        const bool branch_taken_0x3cef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEF4Cu;
        // 0x3cef50: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cef4c) {
            ctx->pc = 0x3CEF8Cu;
            goto label_3cef8c;
        }
    }
    ctx->pc = 0x3CEF54u;
label_3cef54:
    // 0x3cef54: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x3cef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x3cef58: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CEF58u;
    SET_GPR_U32(ctx, 31, 0x3CEF60u);
    ctx->pc = 0x3CEF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF58u;
    // 0x3cef5c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CEF58u, 0x3CEF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF60u;
label_3cef60:
    // 0x3cef60: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CEF60u;
    {
        const bool branch_taken_0x3cef60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cef60) {
            ctx->pc = 0x3CEF78u;
            goto label_3cef78;
        }
    }
    ctx->pc = 0x3CEF68u;
    // 0x3cef68: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CEF68u;
    SET_GPR_U32(ctx, 31, 0x3CEF70u);
    ctx->pc = 0x3CEF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF68u;
    // 0x3cef6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CEF68u, 0x3CEF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF70u;
label_3cef70:
    // 0x3cef70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CEF70u;
    {
        const bool branch_taken_0x3cef70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEF70u;
        // 0x3cef74: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cef70) {
            ctx->pc = 0x3CEF8Cu;
            goto label_3cef8c;
        }
    }
    ctx->pc = 0x3CEF78u;
label_3cef78:
    // 0x3cef78: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CEF78u;
    SET_GPR_U32(ctx, 31, 0x3CEF80u);
    ctx->pc = 0x3CEF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF78u;
    // 0x3cef7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CEF78u, 0x3CEF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF80u;
label_3cef80:
    // 0x3cef80: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CEF80u;
    SET_GPR_U32(ctx, 31, 0x3CEF88u);
    ctx->pc = 0x3CEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CEF80u;
    // 0x3cef84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CEF80u, 0x3CEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CEF88u;
label_3cef88:
    // 0x3cef88: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3cef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3cef8c:
    // 0x3cef8c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3cef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3cef90: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3cef90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3cef94: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3cef94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3cef98: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3cef98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3cef9c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3cef9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cefa0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3cefa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cefa4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3cefa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cefa8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3cefa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cefac: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3cefacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cefb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3CEFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEFB0u;
        // 0x3cefb4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CEFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CEFB8u;
    // 0x3cefb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cefb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cefbc: 0x0  nop
    ctx->pc = 0x3cefbcu;
    // NOP
    // 0x3cefc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cefc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cefc4: 0x0  nop
    ctx->pc = 0x3cefc4u;
    // NOP
    // 0x3cefc8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3cefc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3cefcc: 0x0  nop
    ctx->pc = 0x3cefccu;
    // NOP
    // 0x3cefd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3cefd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cefd4: 0x0  nop
    ctx->pc = 0x3cefd4u;
    // NOP
    ctx->pc = 0x3cefd8u;
}
