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

// Function: sub_002AC0B8
// Address: 0x2ac0b8 - 0x2ac170
void sub_002AC0B8_0x2ac0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC0B8_0x2ac0b8");
#endif

    switch (ctx->pc) {
        case 0x2ac0d4u: goto label_2ac0d4;
        case 0x2ac0e0u: goto label_2ac0e0;
        case 0x2ac0ecu: goto label_2ac0ec;
        case 0x2ac0f8u: goto label_2ac0f8;
        case 0x2ac104u: goto label_2ac104;
        case 0x2ac110u: goto label_2ac110;
        case 0x2ac11cu: goto label_2ac11c;
        case 0x2ac128u: goto label_2ac128;
        case 0x2ac134u: goto label_2ac134;
        case 0x2ac140u: goto label_2ac140;
        default: break;
    }

    ctx->pc = 0x2ac0b8u;

    // 0x2ac0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac0c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac0c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac0c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ac0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ac0c8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ac0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ac0cc: 0xc0abb62  jal         func_2AED88
    ctx->pc = 0x2AC0CCu;
    SET_GPR_U32(ctx, 31, 0x2AC0D4u);
    ctx->pc = 0x2AC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0CCu;
    // 0x2ac0d0: 0x24842448  addiu       $a0, $a0, 0x2448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED88u, 0x2AC0CCu, 0x2AC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0D4u;
label_2ac0d4:
    // 0x2ac0d4: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ac0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ac0d8: 0xc0ab0d4  jal         func_2AC350
    ctx->pc = 0x2AC0D8u;
    SET_GPR_U32(ctx, 31, 0x2AC0E0u);
    ctx->pc = 0x2AC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0D8u;
    // 0x2ac0dc: 0x24842408  addiu       $a0, $a0, 0x2408 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC350u, 0x2AC0D8u, 0x2AC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0E0u;
label_2ac0e0:
    // 0x2ac0e0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac0e4: 0xc041cc6  jal         func_107318
    ctx->pc = 0x2AC0E4u;
    SET_GPR_U32(ctx, 31, 0x2AC0ECu);
    ctx->pc = 0x2AC0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0E4u;
    // 0x2ac0e8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107318u, 0x2AC0E4u, 0x2AC0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0ECu;
label_2ac0ec:
    // 0x2ac0ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac0f0: 0xc0476ca  jal         func_11DB28
    ctx->pc = 0x2AC0F0u;
    SET_GPR_U32(ctx, 31, 0x2AC0F8u);
    ctx->pc = 0x2AC0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0F0u;
    // 0x2ac0f4: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DB28u, 0x2AC0F0u, 0x2AC0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC0F8u;
label_2ac0f8:
    // 0x2ac0f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac0fc: 0xc04acf8  jal         func_12B3E0
    ctx->pc = 0x2AC0FCu;
    SET_GPR_U32(ctx, 31, 0x2AC104u);
    ctx->pc = 0x2AC100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC0FCu;
    // 0x2ac100: 0x2484b060  addiu       $a0, $a0, -0x4FA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B3E0u, 0x2AC0FCu, 0x2AC104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC104u;
label_2ac104:
    // 0x2ac104: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac108: 0xc04840c  jal         func_121030
    ctx->pc = 0x2AC108u;
    SET_GPR_U32(ctx, 31, 0x2AC110u);
    ctx->pc = 0x2AC10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC108u;
    // 0x2ac10c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121030u, 0x2AC108u, 0x2AC110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC110u;
label_2ac110:
    // 0x2ac110: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac114: 0xc046e66  jal         func_11B998
    ctx->pc = 0x2AC114u;
    SET_GPR_U32(ctx, 31, 0x2AC11Cu);
    ctx->pc = 0x2AC118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC114u;
    // 0x2ac118: 0x248499f0  addiu       $a0, $a0, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B998u, 0x2AC114u, 0x2AC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC11Cu;
label_2ac11c:
    // 0x2ac11c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac120: 0xc046566  jal         func_119598
    ctx->pc = 0x2AC120u;
    SET_GPR_U32(ctx, 31, 0x2AC128u);
    ctx->pc = 0x2AC124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC120u;
    // 0x2ac124: 0x248487a0  addiu       $a0, $a0, -0x7860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119598u, 0x2AC120u, 0x2AC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC128u;
label_2ac128:
    // 0x2ac128: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac12c: 0xc04b28e  jal         func_12CA38
    ctx->pc = 0x2AC12Cu;
    SET_GPR_U32(ctx, 31, 0x2AC134u);
    ctx->pc = 0x2AC130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC12Cu;
    // 0x2ac130: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA38u, 0x2AC12Cu, 0x2AC134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC134u;
label_2ac134:
    // 0x2ac134: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2ac134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x2ac138: 0xc047f84  jal         func_11FE10
    ctx->pc = 0x2AC138u;
    SET_GPR_U32(ctx, 31, 0x2AC140u);
    ctx->pc = 0x2AC13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC138u;
    // 0x2ac13c: 0x24849e60  addiu       $a0, $a0, -0x61A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE10u, 0x2AC138u, 0x2AC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC140u;
label_2ac140:
    // 0x2ac140: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ac140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ac144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2ac144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac148: 0xac40a9d4  sw          $zero, -0x562C($v0)
    ctx->pc = 0x2ac148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA9D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA9D4u, _value); } while (0);
    // 0x2ac14c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ac14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ac150: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2ac150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2ac154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac158: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ac158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac15c: 0xac6095d4  sw          $zero, -0x6A2C($v1)
    ctx->pc = 0x2ac15cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F95D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F95D4u, _value); } while (0);
    // 0x2ac160: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC160u;
        // 0x2ac164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC168u;
    // 0x2ac168: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ac168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ac16c: 0x0  nop
    ctx->pc = 0x2ac16cu;
    // NOP
    ctx->pc = 0x2ac170u;
}
