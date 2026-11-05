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

// Function: sub_00146230
// Address: 0x146230 - 0x146288
void sub_00146230_0x146230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146230_0x146230");
#endif

    switch (ctx->pc) {
        case 0x146268u: goto label_146268;
        default: break;
    }

    ctx->pc = 0x146230u;

    // 0x146230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x146234: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x146234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x146238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14623c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14623cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x146240: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x146240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x146244: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x146244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x146248: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x146248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14624c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14624cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x146250: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x146250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x146254: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x146254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14625c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x146260: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x146260u;
    SET_GPR_U32(ctx, 31, 0x146268u);
    ctx->pc = 0x146264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146260u;
    // 0x146264: 0x8c64020c  lw          $a0, 0x20C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x146260u, 0x146268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146268u;
label_146268:
    // 0x146268: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x146268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x14626c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14626cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146270: 0x9062078d  lbu         $v0, 0x78D($v1)
    ctx->pc = 0x146270u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F078Du));
    // 0x146274: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x146274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x146278: 0xa062078d  sb          $v0, 0x78D($v1)
    ctx->pc = 0x146278u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F078Du, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F078Du, _value); } while (0);
    // 0x14627c: 0x3e00008  jr          $ra
    ctx->pc = 0x14627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14627Cu;
        // 0x146280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146284u;
    // 0x146284: 0x0  nop
    ctx->pc = 0x146284u;
    // NOP
    ctx->pc = 0x146288u;
}
