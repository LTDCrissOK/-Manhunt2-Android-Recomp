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

// Function: sub_0010A1E8
// Address: 0x10a1e8 - 0x10a268
void sub_0010A1E8_0x10a1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A1E8_0x10a1e8");
#endif

    switch (ctx->pc) {
        case 0x10a20cu: goto label_10a20c;
        case 0x10a238u: goto label_10a238;
        case 0x10a248u: goto label_10a248;
        default: break;
    }

    ctx->pc = 0x10a1e8u;

    // 0x10a1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a1f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10a1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10a1f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a1f8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10a1f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10a1fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a200: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10a200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a204: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10A204u;
    SET_GPR_U32(ctx, 31, 0x10A20Cu);
    ctx->pc = 0x10A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A204u;
    // 0x10a208: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10A204u, 0x10A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A20Cu;
label_10a20c:
    // 0x10a20c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10a210: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10a210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10a214: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10a218: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10a218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10a21c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10a21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10a220: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10A220u;
    {
        const bool branch_taken_0x10a220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a220) {
            ctx->pc = 0x10A224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A220u;
            // 0x10a224: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A24Cu;
            goto label_10a24c;
        }
    }
    ctx->pc = 0x10A228u;
    // 0x10a228: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10a228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10a22c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10a22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a230: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x10A230u;
    SET_GPR_U32(ctx, 31, 0x10A238u);
    ctx->pc = 0x10A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A230u;
    // 0x10a234: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x10A230u, 0x10A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A238u;
label_10a238:
    // 0x10a238: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10a238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a240: 0xc044130  jal         func_1104C0
    ctx->pc = 0x10A240u;
    SET_GPR_U32(ctx, 31, 0x10A248u);
    ctx->pc = 0x10A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A240u;
    // 0x10a244: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104C0u, 0x10A240u, 0x10A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A248u;
label_10a248:
    // 0x10a248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a24c:
    // 0x10a24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10a250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10a254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a258: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A25Cu;
        // 0x10a260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A264u;
    // 0x10a264: 0x0  nop
    ctx->pc = 0x10a264u;
    // NOP
    ctx->pc = 0x10a268u;
}
