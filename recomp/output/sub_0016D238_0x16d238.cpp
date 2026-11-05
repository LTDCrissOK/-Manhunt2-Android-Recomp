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

// Function: sub_0016D238
// Address: 0x16d238 - 0x16d2c0
void sub_0016D238_0x16d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D238_0x16d238");
#endif

    switch (ctx->pc) {
        case 0x16d294u: goto label_16d294;
        case 0x16d2a4u: goto label_16d2a4;
        default: break;
    }

    ctx->pc = 0x16d238u;

    // 0x16d238: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d23c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x16d23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16d240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16d244: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16d248: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d24c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d254: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16d254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x16d258: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x16d258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x16d25c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16d25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d260: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16d264: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x16d264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16d268: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16d268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d26c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d270: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d274: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x16d274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x16d278: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x16d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x16d27c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16D27Cu;
    {
        const bool branch_taken_0x16d27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D27Cu;
        // 0x16d280: 0x8e0300d0  lw          $v1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d27c) {
            ctx->pc = 0x16D288u;
            goto label_16d288;
        }
    }
    ctx->pc = 0x16D284u;
    // 0x16d284: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x16d284u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16d288:
    // 0x16d288: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16d288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d28c: 0xc043a06  jal         func_10E818
    ctx->pc = 0x16D28Cu;
    SET_GPR_U32(ctx, 31, 0x16D294u);
    ctx->pc = 0x16D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D28Cu;
    // 0x16d290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E818u, 0x16D28Cu, 0x16D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D294u;
label_16d294:
    // 0x16d294: 0xae00020c  sw          $zero, 0x20C($s0)
    ctx->pc = 0x16d294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 524), GPR_U32(ctx, 0));
    // 0x16d298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d29c: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x16D29Cu;
    SET_GPR_U32(ctx, 31, 0x16D2A4u);
    ctx->pc = 0x16D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D29Cu;
    // 0x16d2a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x16D29Cu, 0x16D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D2A4u;
label_16d2a4:
    // 0x16d2a4: 0xa22000f8  sb          $zero, 0xF8($s1)
    ctx->pc = 0x16d2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x16d2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d2ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16d2acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d2b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d2b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2B4u;
        // 0x16d2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D2BCu;
    // 0x16d2bc: 0x0  nop
    ctx->pc = 0x16d2bcu;
    // NOP
    ctx->pc = 0x16d2c0u;
}
