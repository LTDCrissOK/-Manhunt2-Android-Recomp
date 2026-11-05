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

// Function: sub_001461A8
// Address: 0x1461a8 - 0x146230
void sub_001461A8_0x1461a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001461A8_0x1461a8");
#endif

    switch (ctx->pc) {
        case 0x1461e8u: goto label_1461e8;
        case 0x146210u: goto label_146210;
        case 0x146220u: goto label_146220;
        default: break;
    }

    ctx->pc = 0x1461a8u;

    // 0x1461a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1461a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1461ac: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1461acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1461b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1461b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1461b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1461b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1461b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1461b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1461bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1461bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1461c0: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x1461c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x1461c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1461c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1461c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1461c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1461cc: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x1461ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x1461d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1461d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1461d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1461d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1461d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1461d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1461dc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1461dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1461e0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x1461E0u;
    SET_GPR_U32(ctx, 31, 0x1461E8u);
    ctx->pc = 0x1461E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1461E0u;
    // 0x1461e4: 0x8cc4020c  lw          $a0, 0x20C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x1461E0u, 0x1461E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1461E8u;
label_1461e8:
    // 0x1461e8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1461e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1461ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1461ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1461f0: 0x9062078d  lbu         $v0, 0x78D($v1)
    ctx->pc = 0x1461f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F078Du));
    // 0x1461f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1461f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1461f8: 0xa062078d  sb          $v0, 0x78D($v1)
    ctx->pc = 0x1461f8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F078Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F078Du, _value); } while (0);
    // 0x1461fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1461fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x146200: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146200u;
    {
        const bool branch_taken_0x146200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x146200) {
            ctx->pc = 0x146218u;
            goto label_146218;
        }
    }
    ctx->pc = 0x146208u;
    // 0x146208: 0xc0519ea  jal         func_1467A8
    ctx->pc = 0x146208u;
    SET_GPR_U32(ctx, 31, 0x146210u);
    ctx->pc = 0x14620Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146208u;
    // 0x14620c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1467A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1467A8u, 0x146208u, 0x146210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146210u;
label_146210:
    // 0x146210: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146210u;
    {
        const bool branch_taken_0x146210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146210u;
        // 0x146214: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146210) {
            ctx->pc = 0x146224u;
            goto label_146224;
        }
    }
    ctx->pc = 0x146218u;
label_146218:
    // 0x146218: 0xc051a28  jal         func_1468A0
    ctx->pc = 0x146218u;
    SET_GPR_U32(ctx, 31, 0x146220u);
    ctx->pc = 0x14621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146218u;
    // 0x14621c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1468A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1468A0u, 0x146218u, 0x146220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146220u;
label_146220:
    // 0x146220: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146224:
    // 0x146224: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x146224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146228: 0x3e00008  jr          $ra
    ctx->pc = 0x146228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146228u;
        // 0x14622c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146230u;
}
