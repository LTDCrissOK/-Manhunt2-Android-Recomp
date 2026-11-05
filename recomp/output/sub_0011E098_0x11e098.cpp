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

// Function: sub_0011E098
// Address: 0x11e098 - 0x11e168
void sub_0011E098_0x11e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E098_0x11e098");
#endif

    switch (ctx->pc) {
        case 0x11e0f0u: goto label_11e0f0;
        case 0x11e108u: goto label_11e108;
        case 0x11e118u: goto label_11e118;
        case 0x11e134u: goto label_11e134;
        case 0x11e148u: goto label_11e148;
        default: break;
    }

    ctx->pc = 0x11e098u;

    // 0x11e098: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11e09c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x11e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x11e0a0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11e0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11e0a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11e0a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0a8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x11e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x11e0ac: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x11e0acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x11e0b0: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x11e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x11e0b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0b8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x11e0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11e0bc: 0x8c430410  lw          $v1, 0x410($v0)
    ctx->pc = 0x11e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
    // 0x11e0c0: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11E0C0u;
    {
        const bool branch_taken_0x11e0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0C0u;
        // 0x11e0c4: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0c0) {
            ctx->pc = 0x11E11Cu;
            goto label_11e11c;
        }
    }
    ctx->pc = 0x11E0C8u;
    // 0x11e0c8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x11e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x11e0cc: 0x37a40002  ori         $a0, $sp, 0x2
    ctx->pc = 0x11e0ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x11e0d0: 0x2449c328  addiu       $t1, $v0, -0x3CD8
    ctx->pc = 0x11e0d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951720));
    // 0x11e0d4: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x11e0d4u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x43C328u));
    // 0x11e0d8: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x11e0d8u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x43C329u));
    // 0x11e0dc: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x11e0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11e0e0: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x11e0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x11e0e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e0e8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x11E0E8u;
    SET_GPR_U32(ctx, 31, 0x11E0F0u);
    ctx->pc = 0x11E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E0E8u;
    // 0x11e0ec: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x11E0E8u, 0x11E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E0F0u;
label_11e0f0:
    // 0x11e0f0: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x11e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11e0f4: 0x8c440434  lw          $a0, 0x434($v0)
    ctx->pc = 0x11e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1076)));
    // 0x11e0f8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E0F8u;
    {
        const bool branch_taken_0x11e0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e0f8) {
            ctx->pc = 0x11E0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E0F8u;
            // 0x11e0fc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E10Cu;
            goto label_11e10c;
        }
    }
    ctx->pc = 0x11E100u;
    // 0x11e100: 0xc0aaf3c  jal         func_2ABCF0
    ctx->pc = 0x11E100u;
    SET_GPR_U32(ctx, 31, 0x11E108u);
    ctx->pc = 0x11E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E100u;
    // 0x11e104: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCF0u, 0x11E100u, 0x11E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E108u;
label_11e108:
    // 0x11e108: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11e108u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_11e10c:
    // 0x11e10c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e110: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x11E110u;
    SET_GPR_U32(ctx, 31, 0x11E118u);
    ctx->pc = 0x11E114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E110u;
    // 0x11e114: 0x24a5c388  addiu       $a1, $a1, -0x3C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x11E110u, 0x11E118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E118u;
label_11e118:
    // 0x11e118: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x11e118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_11e11c:
    // 0x11e11c: 0x26300434  addiu       $s0, $s1, 0x434
    ctx->pc = 0x11e11cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1076));
    // 0x11e120: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x11e120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11e124: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x11e124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11e128: 0xac600410  sw          $zero, 0x410($v1)
    ctx->pc = 0x11e128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1040), GPR_U32(ctx, 0));
    // 0x11e12c: 0xc0aae42  jal         func_2AB908
    ctx->pc = 0x11E12Cu;
    SET_GPR_U32(ctx, 31, 0x11E134u);
    ctx->pc = 0x11E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E12Cu;
    // 0x11e130: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB908u, 0x11E12Cu, 0x11E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E134u;
label_11e134:
    // 0x11e134: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x11e134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x11e138: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11e138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11e13c: 0x24842408  addiu       $a0, $a0, 0x2408
    ctx->pc = 0x11e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
    // 0x11e140: 0xc0f6e5a  jal         func_3DB968
    ctx->pc = 0x11E140u;
    SET_GPR_U32(ctx, 31, 0x11E148u);
    ctx->pc = 0x11E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E140u;
    // 0x11e144: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB968u, 0x11E140u, 0x11E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11E148u;
label_11e148:
    // 0x11e148: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11e148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11e14c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11e14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11e150: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x11e150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11e154: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11e154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11e158: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x11e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11e15c: 0x3e00008  jr          $ra
    ctx->pc = 0x11E15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E15Cu;
        // 0x11e160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E164u;
    // 0x11e164: 0x0  nop
    ctx->pc = 0x11e164u;
    // NOP
    ctx->pc = 0x11e168u;
}
