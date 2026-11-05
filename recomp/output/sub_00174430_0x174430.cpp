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

// Function: sub_00174430
// Address: 0x174430 - 0x1744b8
void sub_00174430_0x174430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174430_0x174430");
#endif

    switch (ctx->pc) {
        case 0x174458u: goto label_174458;
        case 0x17446cu: goto label_17446c;
        case 0x174484u: goto label_174484;
        case 0x17449cu: goto label_17449c;
        default: break;
    }

    ctx->pc = 0x174430u;

    // 0x174430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x174434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x174438: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x174438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17443c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17443cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174440: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x174440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174444: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x174444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x174448: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x174448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x17444c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x17444cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x174450: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174450u;
    SET_GPR_U32(ctx, 31, 0x174458u);
    ctx->pc = 0x174454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174450u;
    // 0x174454: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174450u, 0x174458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174458u;
label_174458:
    // 0x174458: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x174458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17445c: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x17445cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x174460: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174464: 0xc0444a2  jal         func_111288
    ctx->pc = 0x174464u;
    SET_GPR_U32(ctx, 31, 0x17446Cu);
    ctx->pc = 0x174468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174464u;
    // 0x174468: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111288u, 0x174464u, 0x17446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17446Cu;
label_17446c:
    // 0x17446c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17446Cu;
    {
        const bool branch_taken_0x17446c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17446Cu;
        // 0x174470: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17446c) {
            ctx->pc = 0x17449Cu;
            goto label_17449c;
        }
    }
    ctx->pc = 0x174474u;
    // 0x174474: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x174474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x174478: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x174478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17447c: 0xc05d01a  jal         func_174068
    ctx->pc = 0x17447Cu;
    SET_GPR_U32(ctx, 31, 0x174484u);
    ctx->pc = 0x174480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17447Cu;
    // 0x174480: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174068u, 0x17447Cu, 0x174484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174484u;
label_174484:
    // 0x174484: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174484u;
    {
        const bool branch_taken_0x174484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174484u;
        // 0x174488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174484) {
            ctx->pc = 0x17449Cu;
            goto label_17449c;
        }
    }
    ctx->pc = 0x17448Cu;
    // 0x17448c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17448cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174490: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x174494: 0xc04fb7a  jal         func_13EDE8
    ctx->pc = 0x174494u;
    SET_GPR_U32(ctx, 31, 0x17449Cu);
    ctx->pc = 0x174498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174494u;
    // 0x174498: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDE8u, 0x174494u, 0x17449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17449Cu;
label_17449c:
    // 0x17449c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17449cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1744a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1744a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1744a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1744a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1744a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1744a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1744ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1744ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1744B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1744ACu;
        // 0x1744b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1744ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1744B4u;
    // 0x1744b4: 0x0  nop
    ctx->pc = 0x1744b4u;
    // NOP
    ctx->pc = 0x1744b8u;
}
