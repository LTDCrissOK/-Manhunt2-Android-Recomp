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

// Function: sub_0036A978
// Address: 0x36a978 - 0x36aa00
void sub_0036A978_0x36a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A978_0x36a978");
#endif

    switch (ctx->pc) {
        case 0x36a9b4u: goto label_36a9b4;
        case 0x36a9c8u: goto label_36a9c8;
        default: break;
    }

    ctx->pc = 0x36a978u;

    // 0x36a978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36a978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36a97c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36a980: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36a984: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36a988: 0x2450ca60  addiu       $s0, $v0, -0x35A0
    ctx->pc = 0x36a988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
    // 0x36a98c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36a990: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36a990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a994: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x36a994u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x6BCA84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA84u, _value); } while (0);
    // 0x36a998: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a99c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x36a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BCA74u));
    // 0x36a9a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x36a9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a9a4: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x36a9a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BCA88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA88u, _value); } while (0);
    // 0x36a9a8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x36a9a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BCA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA78u, _value); } while (0);
    // 0x36a9ac: 0xc0db160  jal         func_36C580
    ctx->pc = 0x36A9ACu;
    SET_GPR_U32(ctx, 31, 0x36A9B4u);
    ctx->pc = 0x36A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A9ACu;
    // 0x36a9b0: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C580u, 0x36A9ACu, 0x36A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A9B4u;
label_36a9b4:
    // 0x36a9b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x36a9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a9b8: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36A9B8u;
    {
        const bool branch_taken_0x36a9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x36A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9B8u;
        // 0x36a9bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9b8) {
            ctx->pc = 0x36A9C8u;
            goto label_36a9c8;
        }
    }
    ctx->pc = 0x36A9C0u;
    // 0x36a9c0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x36A9C0u;
    SET_GPR_U32(ctx, 31, 0x36A9C8u);
    ctx->pc = 0x36A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A9C0u;
    // 0x36a9c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x36A9C0u, 0x36A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A9C8u;
label_36a9c8:
    // 0x36a9c8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x36a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x36a9cc: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x36a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x36a9d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x36A9D0u;
    {
        const bool branch_taken_0x36a9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9D0u;
        // 0x36a9d4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a9d0) {
            ctx->pc = 0x36A9E8u;
            goto label_36a9e8;
        }
    }
    ctx->pc = 0x36A9D8u;
    // 0x36a9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36a9dc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36A9DCu;
    {
        const bool branch_taken_0x36a9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x36a9dc) {
            ctx->pc = 0x36A9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A9DCu;
            // 0x36a9e0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A9F0u;
            goto label_36a9f0;
        }
    }
    ctx->pc = 0x36A9E4u;
    // 0x36a9e4: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x36a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_36a9e8:
    // 0x36a9e8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x36a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x36a9ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36a9ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36a9f0:
    // 0x36a9f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36a9f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a9f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A9F8u;
        // 0x36a9fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AA00u;
}
