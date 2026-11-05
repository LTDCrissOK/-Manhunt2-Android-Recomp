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

// Function: sub_003D0178
// Address: 0x3d0178 - 0x3d0278
void sub_003D0178_0x3d0178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0178_0x3d0178");
#endif

    switch (ctx->pc) {
        case 0x3d01b8u: goto label_3d01b8;
        case 0x3d01c4u: goto label_3d01c4;
        case 0x3d01d4u: goto label_3d01d4;
        case 0x3d01e8u: goto label_3d01e8;
        case 0x3d0200u: goto label_3d0200;
        case 0x3d0214u: goto label_3d0214;
        case 0x3d0230u: goto label_3d0230;
        default: break;
    }

    ctx->pc = 0x3d0178u;

    // 0x3d0178: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3d0178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3d017c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d017cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3d0180: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x3d0180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x3d0184: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3d0184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3d0188: 0x3c15003d  lui         $s5, 0x3D
    ctx->pc = 0x3d0188u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
    // 0x3d018c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3d018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3d0190: 0x3c14003d  lui         $s4, 0x3D
    ctx->pc = 0x3d0190u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)61 << 16));
    // 0x3d0194: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d0194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d0198: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d0198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d019c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d01a0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d01a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3d01a4: 0x2450d6b8  addiu       $s0, $v0, -0x2948
    ctx->pc = 0x3d01a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956728));
    // 0x3d01a8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x3d01a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x3d01ac: 0x8c44d6b8  lw          $a0, -0x2948($v0)
    ctx->pc = 0x3d01acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42D6B8u));
    // 0x3d01b0: 0xc0f409e  jal         func_3D0278
    ctx->pc = 0x3D01B0u;
    SET_GPR_U32(ctx, 31, 0x3D01B8u);
    ctx->pc = 0x3D01B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D01B0u;
    // 0x3d01b4: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0278u, 0x3D01B0u, 0x3D01B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D01B8u;
label_3d01b8:
    // 0x3d01b8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3d01b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d01bc: 0xc0f409e  jal         func_3D0278
    ctx->pc = 0x3D01BCu;
    SET_GPR_U32(ctx, 31, 0x3D01C4u);
    ctx->pc = 0x3D01C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D01BCu;
    // 0x3d01c0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0278u, 0x3D01BCu, 0x3D01C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D01C4u;
label_3d01c4:
    // 0x3d01c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d01c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3d01c8: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3d01c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3d01cc: 0xc0f4058  jal         func_3D0160
    ctx->pc = 0x3D01CCu;
    SET_GPR_U32(ctx, 31, 0x3D01D4u);
    ctx->pc = 0x3D01D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D01CCu;
    // 0x3d01d0: 0x26a60120  addiu       $a2, $s5, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0160u, 0x3D01CCu, 0x3D01D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D01D4u;
label_3d01d4:
    // 0x3d01d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d01d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d01d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3d01dc: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3d01dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3d01e0: 0xc0f4058  jal         func_3D0160
    ctx->pc = 0x3D01E0u;
    SET_GPR_U32(ctx, 31, 0x3D01E8u);
    ctx->pc = 0x3D01E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D01E0u;
    // 0x3d01e4: 0x268600e8  addiu       $a2, $s4, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0160u, 0x3D01E0u, 0x3D01E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D01E8u;
label_3d01e8:
    // 0x3d01e8: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x3d01e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x3d01ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d01ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d01f0: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x3d01f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x3d01f4: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3D01F4u;
    {
        const bool branch_taken_0x3d01f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3D01F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D01F4u;
        // 0x3d01f8: 0x3c160043  lui         $s6, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d01f4) {
            ctx->pc = 0x3D0248u;
            goto label_3d0248;
        }
    }
    ctx->pc = 0x3D01FCu;
    // 0x3d01fc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3d01fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3d0200:
    // 0x3d0200: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D0200u;
    {
        const bool branch_taken_0x3d0200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0200u;
        // 0x3d0204: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0200) {
            ctx->pc = 0x3D0220u;
            goto label_3d0220;
        }
    }
    ctx->pc = 0x3D0208u;
    // 0x3d0208: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3d0208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3d020c: 0xc0f4058  jal         func_3D0160
    ctx->pc = 0x3D020Cu;
    SET_GPR_U32(ctx, 31, 0x3D0214u);
    ctx->pc = 0x3D0210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D020Cu;
    // 0x3d0210: 0x26a60120  addiu       $a2, $s5, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0160u, 0x3D020Cu, 0x3D0214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0214u;
label_3d0214:
    // 0x3d0214: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d0214u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0218: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3D0218u;
    {
        const bool branch_taken_0x3d0218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0218u;
        // 0x3d021c: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0218) {
            ctx->pc = 0x3D0238u;
            goto label_3d0238;
        }
    }
    ctx->pc = 0x3D0220u;
label_3d0220:
    // 0x3d0220: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x3d0220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x3d0224: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x3d0224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x3d0228: 0xc0f4058  jal         func_3D0160
    ctx->pc = 0x3D0228u;
    SET_GPR_U32(ctx, 31, 0x3D0230u);
    ctx->pc = 0x3D022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0228u;
    // 0x3d022c: 0x268600e8  addiu       $a2, $s4, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0160u, 0x3D0228u, 0x3D0230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0230u;
label_3d0230:
    // 0x3d0230: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d0230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d0234: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x3d0234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_3d0238:
    // 0x3d0238: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3D0238u;
    {
        const bool branch_taken_0x3d0238 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3D023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0238u;
        // 0x3d023c: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0238) {
            ctx->pc = 0x3D0200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0200;
        }
    }
    ctx->pc = 0x3D0240u;
    // 0x3d0240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D0240u;
    {
        const bool branch_taken_0x3d0240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0240u;
        // 0x3d0244: 0xaed1d6b0  sw          $s1, -0x2950($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294956720), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0240) {
            ctx->pc = 0x3D024Cu;
            goto label_3d024c;
        }
    }
    ctx->pc = 0x3D0248u;
label_3d0248:
    // 0x3d0248: 0xaed1d6b0  sw          $s1, -0x2950($s6)
    ctx->pc = 0x3d0248u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294956720), GPR_U32(ctx, 17));
label_3d024c:
    // 0x3d024c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d024cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d0250: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3d0250u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d0254: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3d0254u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d0258: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3d0258u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d025c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3d025cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d0260: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d0260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0264: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d0264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0268: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d026c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D026Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D026Cu;
        // 0x3d0270: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D026Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0274u;
    // 0x3d0274: 0x0  nop
    ctx->pc = 0x3d0274u;
    // NOP
    ctx->pc = 0x3d0278u;
}
