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

// Function: sub_003057B8
// Address: 0x3057b8 - 0x305838
void sub_003057B8_0x3057b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003057B8_0x3057b8");
#endif

    switch (ctx->pc) {
        case 0x3057ccu: goto label_3057cc;
        default: break;
    }

    ctx->pc = 0x3057b8u;

    // 0x3057b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3057b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3057bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3057bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3057c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3057c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3057c4: 0xc08ff20  jal         func_23FC80
    ctx->pc = 0x3057C4u;
    SET_GPR_U32(ctx, 31, 0x3057CCu);
    ctx->pc = 0x3057C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3057C4u;
    // 0x3057c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FC80u, 0x3057C4u, 0x3057CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3057CCu;
label_3057cc:
    // 0x3057cc: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x3057ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x3057d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3057d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3057d4: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x3057d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x3057d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3057D8u;
    {
        const bool branch_taken_0x3057d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3057DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3057D8u;
        // 0x3057dc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3057d8) {
            ctx->pc = 0x3057E8u;
            goto label_3057e8;
        }
    }
    ctx->pc = 0x3057E0u;
    // 0x3057e0: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3057E0u;
    {
        const bool branch_taken_0x3057e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3057e0) {
            ctx->pc = 0x3057E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3057E0u;
            // 0x3057e4: 0x8e0205b0  lw          $v0, 0x5B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305810u;
            goto label_305810;
        }
    }
    ctx->pc = 0x3057E8u;
label_3057e8:
    // 0x3057e8: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x3057e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x3057ec: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3057ECu;
    {
        const bool branch_taken_0x3057ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3057ec) {
            ctx->pc = 0x3057F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3057ECu;
            // 0x3057f0: 0x8e0205b0  lw          $v0, 0x5B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305810u;
            goto label_305810;
        }
    }
    ctx->pc = 0x3057F4u;
    // 0x3057f4: 0x9464002a  lhu         $a0, 0x2A($v1)
    ctx->pc = 0x3057f4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x3057f8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x3057f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x3057fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3057FCu;
    {
        const bool branch_taken_0x3057fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3057fc) {
            ctx->pc = 0x305800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3057FCu;
            // 0x305800: 0x8e0205b0  lw          $v0, 0x5B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305810u;
            goto label_305810;
        }
    }
    ctx->pc = 0x305804u;
    // 0x305804: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x305804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x305808: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x305808u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x30580c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x30580cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_305810:
    // 0x305810: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x305810u;
    {
        const bool branch_taken_0x305810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305810) {
            ctx->pc = 0x305814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305810u;
            // 0x305814: 0x8e0200b8  lw          $v0, 0xB8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305820u;
            goto label_305820;
        }
    }
    ctx->pc = 0x305818u;
    // 0x305818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x305818u;
    {
        const bool branch_taken_0x305818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305818u;
        // 0x30581c: 0xae0010c0  sw          $zero, 0x10C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305818) {
            ctx->pc = 0x305828u;
            goto label_305828;
        }
    }
    ctx->pc = 0x305820u;
label_305820:
    // 0x305820: 0xc4401500  lwc1        $f0, 0x1500($v0)
    ctx->pc = 0x305820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x305824: 0xe60010c0  swc1        $f0, 0x10C0($s0)
    ctx->pc = 0x305824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4288), bits); }
label_305828:
    // 0x305828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x305828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30582c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30582cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x305830: 0x3e00008  jr          $ra
    ctx->pc = 0x305830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305830u;
        // 0x305834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305838u;
}
