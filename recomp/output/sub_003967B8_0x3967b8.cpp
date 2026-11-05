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

// Function: sub_003967B8
// Address: 0x3967b8 - 0x396840
void sub_003967B8_0x3967b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003967B8_0x3967b8");
#endif

    switch (ctx->pc) {
        case 0x3967e4u: goto label_3967e4;
        case 0x3967fcu: goto label_3967fc;
        case 0x396814u: goto label_396814;
        default: break;
    }

    ctx->pc = 0x3967b8u;

    // 0x3967b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3967b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3967bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3967bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3967c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3967c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3967c4: 0x24521900  addiu       $s2, $v0, 0x1900
    ctx->pc = 0x3967c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6400));
    // 0x3967c8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3967c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x401900u));
    // 0x3967cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3967ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3967d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3967d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3967d4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3967D4u;
    {
        const bool branch_taken_0x3967d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3967D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3967D4u;
        // 0x3967d8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3967d4) {
            ctx->pc = 0x39681Cu;
            goto label_39681c;
        }
    }
    ctx->pc = 0x3967DCu;
    // 0x3967dc: 0xc0f2624  jal         func_3C9890
    ctx->pc = 0x3967DCu;
    SET_GPR_U32(ctx, 31, 0x3967E4u);
    ctx->pc = 0x3967E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3967DCu;
    // 0x3967e0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9890u, 0x3967DCu, 0x3967E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3967E4u;
label_3967e4:
    // 0x3967e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3967e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3967e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3967ec: 0x8c4518d0  lw          $a1, 0x18D0($v0)
    ctx->pc = 0x3967ecu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4018D0u));
    // 0x3967f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3967f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3967f4: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x3967F4u;
    SET_GPR_U32(ctx, 31, 0x3967FCu);
    ctx->pc = 0x3967F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3967F4u;
    // 0x3967f8: 0x26101958  addiu       $s0, $s0, 0x1958 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x3967F4u, 0x3967FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3967FCu;
label_3967fc:
    // 0x3967fc: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3967fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x396800: 0xac6291f0  sw          $v0, -0x6E10($v1)
    ctx->pc = 0x396800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4091F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4091F0u, _value); } while (0);
    // 0x396804: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x396804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x396808: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x396808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39680c: 0xc0e5b88  jal         func_396E20
    ctx->pc = 0x39680Cu;
    SET_GPR_U32(ctx, 31, 0x396814u);
    ctx->pc = 0x396810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39680Cu;
    // 0x396810: 0xacb191f4  sw          $s1, -0x6E0C($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939124), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E20u, 0x39680Cu, 0x396814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396814u;
label_396814:
    // 0x396814: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x396814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x396818: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x396818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39681c:
    // 0x39681c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39681cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x396820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396824: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x396824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x396828: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39682c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39682cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396830: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x396830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x396834: 0x3e00008  jr          $ra
    ctx->pc = 0x396834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396834u;
        // 0x396838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39683Cu;
    // 0x39683c: 0x0  nop
    ctx->pc = 0x39683cu;
    // NOP
    ctx->pc = 0x396840u;
}
