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

// Function: sub_003A9170
// Address: 0x3a9170 - 0x3a9238
void sub_003A9170_0x3a9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9170_0x3a9170");
#endif

    switch (ctx->pc) {
        case 0x3a91acu: goto label_3a91ac;
        case 0x3a91fcu: goto label_3a91fc;
        default: break;
    }

    ctx->pc = 0x3a9170u;

    // 0x3a9170: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a9174: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a9174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a9178: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9178u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0D0u));
    // 0x3a917c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a917cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9180: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a9180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a9184: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9184u;
    {
        const bool branch_taken_0x3a9184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A9188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9184u;
        // 0x3a9188: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9184) {
            ctx->pc = 0x3A919Cu;
            goto label_3a919c;
        }
    }
    ctx->pc = 0x3A918Cu;
    // 0x3a918c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a9190: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0C8u));
    // 0x3a9194: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A9194u;
    {
        const bool branch_taken_0x3a9194 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9194u;
        // 0x3a9198: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9194) {
            ctx->pc = 0x3A922Cu;
            goto label_3a922c;
        }
    }
    ctx->pc = 0x3A919Cu;
label_3a919c:
    // 0x3a919c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a919cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a91a0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3a91a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a91a4: 0xc0ecc24  jal         func_3B3090
    ctx->pc = 0x3A91A4u;
    SET_GPR_U32(ctx, 31, 0x3A91ACu);
    ctx->pc = 0x3A91A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A91A4u;
    // 0x3a91a8: 0x2484ead8  addiu       $a0, $a0, -0x1528 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3090u, 0x3A91A4u, 0x3A91ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A91ACu;
label_3a91ac:
    // 0x3a91ac: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a91acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a91b0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3a91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3a91b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a91b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a91b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3a91b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a91bc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x3a91bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a91c0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x3a91c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a91c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A91C4u;
    {
        const bool branch_taken_0x3a91c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A91C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91C4u;
        // 0x3a91c8: 0x2470a110  addiu       $s0, $v1, -0x5EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91c4) {
            ctx->pc = 0x3A91D8u;
            goto label_3a91d8;
        }
    }
    ctx->pc = 0x3A91CCu;
    // 0x3a91cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A91CCu;
    {
        const bool branch_taken_0x3a91cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A91CCu;
        // 0x3a91d0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a91cc) {
            ctx->pc = 0x3A91DCu;
            goto label_3a91dc;
        }
    }
    ctx->pc = 0x3A91D4u;
    // 0x3a91d4: 0x0  nop
    ctx->pc = 0x3a91d4u;
    // NOP
label_3a91d8:
    // 0x3a91d8: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x3a91d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_3a91dc:
    // 0x3a91dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3a91e0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a91e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a91e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a91e8: 0x9449a124  lhu         $t1, -0x5EDC($v0)
    ctx->pc = 0x3a91e8u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)FAST_READ16(0x41A124u));
    // 0x3a91ec: 0x9462a126  lhu         $v0, -0x5EDA($v1)
    ctx->pc = 0x3a91ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x41A126u));
    // 0x3a91f0: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x3a91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x3a91f4: 0xc0e8f8a  jal         func_3A3E28
    ctx->pc = 0x3A91F4u;
    SET_GPR_U32(ctx, 31, 0x3A91FCu);
    ctx->pc = 0x3A91F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A91F4u;
    // 0x3a91f8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3A91F4u, 0x3A91FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A91FCu;
label_3a91fc:
    // 0x3a91fc: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x3a91fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3a9200: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a9200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a9204: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x3a9204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a9208: 0x2463a108  addiu       $v1, $v1, -0x5EF8
    ctx->pc = 0x3a9208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942984));
    // 0x3a920c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3a920cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3a9210: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x3a9210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x3a9214: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a9214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a9218: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x3a9218u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x41A10Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A10Cu, _value); } while (0);
    // 0x3a921c: 0xac80a0fc  sw          $zero, -0x5F04($a0)
    ctx->pc = 0x3a921cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x41A0FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A0FCu, _value); } while (0);
    // 0x3a9220: 0xaca0a100  sw          $zero, -0x5F00($a1)
    ctx->pc = 0x3a9220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x41A100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A100u, _value); } while (0);
    // 0x3a9224: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x3a9224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x41A108u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41A108u, _value); } while (0);
    // 0x3a9228: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a9228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3a922c:
    // 0x3a922c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a9230: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9230u;
        // 0x3a9234: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9238u;
}
