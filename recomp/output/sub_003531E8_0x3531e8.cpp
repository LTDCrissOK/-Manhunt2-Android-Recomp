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

// Function: sub_003531E8
// Address: 0x3531e8 - 0x353278
void sub_003531E8_0x3531e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003531E8_0x3531e8");
#endif

    switch (ctx->pc) {
        case 0x35321cu: goto label_35321c;
        case 0x353230u: goto label_353230;
        case 0x353240u: goto label_353240;
        case 0x353254u: goto label_353254;
        case 0x353260u: goto label_353260;
        default: break;
    }

    ctx->pc = 0x3531e8u;

    // 0x3531e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3531e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3531ec: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x3531ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x3531f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3531f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3531f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3531f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3531f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3531f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3531fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3531fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x353200: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x353200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353204: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x353208: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x353208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35320c: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x35320cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x353210: 0x24a56708  addiu       $a1, $a1, 0x6708
    ctx->pc = 0x353210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26376));
    // 0x353214: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x353214u;
    SET_GPR_U32(ctx, 31, 0x35321Cu);
    ctx->pc = 0x353218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353214u;
    // 0x353218: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x353214u, 0x35321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35321Cu;
label_35321c:
    // 0x35321c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35321cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353220: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353220u;
    {
        const bool branch_taken_0x353220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353220u;
        // 0x353224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353220) {
            ctx->pc = 0x353230u;
            goto label_353230;
        }
    }
    ctx->pc = 0x353228u;
    // 0x353228: 0xc09e056  jal         func_278158
    ctx->pc = 0x353228u;
    SET_GPR_U32(ctx, 31, 0x353230u);
    ctx->pc = 0x35322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353228u;
    // 0x35322c: 0x26050140  addiu       $a1, $s0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x353228u, 0x353230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353230u;
label_353230:
    // 0x353230: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x353230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x353234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353238: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x353238u;
    SET_GPR_U32(ctx, 31, 0x353240u);
    ctx->pc = 0x35323Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353238u;
    // 0x35323c: 0x24a56718  addiu       $a1, $a1, 0x6718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x353238u, 0x353240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353240u;
label_353240:
    // 0x353240: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x353240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x353244: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x353244u;
    {
        const bool branch_taken_0x353244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353244u;
        // 0x353248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353244) {
            ctx->pc = 0x353254u;
            goto label_353254;
        }
    }
    ctx->pc = 0x35324Cu;
    // 0x35324c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x35324Cu;
    SET_GPR_U32(ctx, 31, 0x353254u);
    ctx->pc = 0x353250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35324Cu;
    // 0x353250: 0x26050144  addiu       $a1, $s0, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x35324Cu, 0x353254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353254u;
label_353254:
    // 0x353254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353258: 0xc0d1b3c  jal         func_346CF0
    ctx->pc = 0x353258u;
    SET_GPR_U32(ctx, 31, 0x353260u);
    ctx->pc = 0x35325Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353258u;
    // 0x35325c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346CF0u, 0x353258u, 0x353260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353260u;
label_353260:
    // 0x353260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x353260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x353264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x353268: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x353268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35326c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35326cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353270: 0x3e00008  jr          $ra
    ctx->pc = 0x353270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353270u;
        // 0x353274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353278u;
}
