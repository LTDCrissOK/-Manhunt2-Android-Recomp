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

// Function: sub_0039E130
// Address: 0x39e130 - 0x39e2d8
void sub_0039E130_0x39e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E130_0x39e130");
#endif

    switch (ctx->pc) {
        case 0x39e1d0u: goto label_39e1d0;
        case 0x39e1d8u: goto label_39e1d8;
        case 0x39e1e0u: goto label_39e1e0;
        case 0x39e1f0u: goto label_39e1f0;
        case 0x39e208u: goto label_39e208;
        case 0x39e2b0u: goto label_39e2b0;
        default: break;
    }

    ctx->pc = 0x39e130u;

    // 0x39e130: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39e134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e138: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e13c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39e13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39e140: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39e140u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e144: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x39e148: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x39e148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e14c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39e14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39e150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39e150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39e154: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x39e154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x39e158: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E158u;
    {
        const bool branch_taken_0x39e158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E158u;
        // 0x39e15c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e158) {
            ctx->pc = 0x39E168u;
            goto label_39e168;
        }
    }
    ctx->pc = 0x39E160u;
    // 0x39e160: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x39E160u;
    {
        const bool branch_taken_0x39e160 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E160u;
        // 0x39e164: 0x2a823000  slti        $v0, $s4, 0x3000 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)12288) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e160) {
            ctx->pc = 0x39E198u;
            goto label_39e198;
        }
    }
    ctx->pc = 0x39E168u;
label_39e168:
    // 0x39e168: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39e168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39e16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e174: 0x2484bc68  addiu       $a0, $a0, -0x4398
    ctx->pc = 0x39e174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949992));
    // 0x39e178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39e178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e17c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39e17cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39e180: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39e180u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e184: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x39e184u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39e188: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39e188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e18c: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39E18Cu;
    ctx->pc = 0x39E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E18Cu;
    // 0x39e190: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39E194u;
    // 0x39e194: 0x0  nop
    ctx->pc = 0x39e194u;
    // NOP
label_39e198:
    // 0x39e198: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39E198u;
    {
        const bool branch_taken_0x39e198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E198u;
        // 0x39e19c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e198) {
            ctx->pc = 0x39E1C8u;
            goto label_39e1c8;
        }
    }
    ctx->pc = 0x39E1A0u;
    // 0x39e1a0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39e1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e1a8: 0x2484bc90  addiu       $a0, $a0, -0x4370
    ctx->pc = 0x39e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950032));
    // 0x39e1ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39e1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e1b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39e1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39e1b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39e1b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e1b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x39e1b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39e1bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39e1bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e1c0: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39E1C0u;
    ctx->pc = 0x39E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1C0u;
    // 0x39e1c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39E1C8u;
label_39e1c8:
    // 0x39e1c8: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x39E1C8u;
    SET_GPR_U32(ctx, 31, 0x39E1D0u);
    ctx->pc = 0x39E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1C8u;
    // 0x39e1cc: 0x26110018  addiu       $s1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39E1C8u, 0x39E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1D0u;
label_39e1d0:
    // 0x39e1d0: 0xc0e78b6  jal         func_39E2D8
    ctx->pc = 0x39E1D0u;
    SET_GPR_U32(ctx, 31, 0x39E1D8u);
    ctx->pc = 0x39E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1D0u;
    // 0x39e1d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E2D8u, 0x39E1D0u, 0x39E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1D8u;
label_39e1d8:
    // 0x39e1d8: 0xc0e7930  jal         func_39E4C0
    ctx->pc = 0x39E1D8u;
    SET_GPR_U32(ctx, 31, 0x39E1E0u);
    ctx->pc = 0x39E4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E4C0u, 0x39E1D8u, 0x39E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1E0u;
label_39e1e0:
    // 0x39e1e0: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x39e1e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39e1e4: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x39e1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x39e1e8: 0xc0e5de6  jal         func_397798
    ctx->pc = 0x39E1E8u;
    SET_GPR_U32(ctx, 31, 0x39E1F0u);
    ctx->pc = 0x39E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E1E8u;
    // 0x39e1ec: 0x8e550004  lw          $s5, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397798u, 0x39E1E8u, 0x39E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E1F0u;
label_39e1f0:
    // 0x39e1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e1f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39e1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e1f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x39e1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e1fc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x39e1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e200: 0xc0e7968  jal         func_39E5A0
    ctx->pc = 0x39E200u;
    SET_GPR_U32(ctx, 31, 0x39E208u);
    ctx->pc = 0x39E204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E200u;
    // 0x39e204: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E5A0u, 0x39E200u, 0x39E208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E208u;
label_39e208:
    // 0x39e208: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x39e208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x39e20c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x39e20cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e210: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x39e210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x39e214: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x39e214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x39e218: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39e218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x39e21c: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x39e21cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
    // 0x39e220: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x39e220u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x39e224: 0x248be3b0  addiu       $t3, $a0, -0x1C50
    ctx->pc = 0x39e224u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960048));
    // 0x39e228: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x39e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e22c: 0x2449e300  addiu       $t1, $v0, -0x1D00
    ctx->pc = 0x39e22cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
    // 0x39e230: 0x246ae3c8  addiu       $t2, $v1, -0x1C38
    ctx->pc = 0x39e230u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960072));
    // 0x39e234: 0x24a5e398  addiu       $a1, $a1, -0x1C68
    ctx->pc = 0x39e234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960024));
    // 0x39e238: 0x24c6e768  addiu       $a2, $a2, -0x1898
    ctx->pc = 0x39e238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961000));
    // 0x39e23c: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x39E23Cu;
    {
        const bool branch_taken_0x39e23c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E23Cu;
        // 0x39e240: 0x24e7eb90  addiu       $a3, $a3, -0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e23c) {
            ctx->pc = 0x39E270u;
            goto label_39e270;
        }
    }
    ctx->pc = 0x39E244u;
    // 0x39e244: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39e244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39e248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e24c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e250: 0x2484bcc0  addiu       $a0, $a0, -0x4340
    ctx->pc = 0x39e250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950080));
    // 0x39e254: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39e254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e258: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39e258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39e25c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39e25cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e260: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x39e260u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39e264: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39e264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e268: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39E268u;
    ctx->pc = 0x39E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E268u;
    // 0x39e26c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39E270u;
label_39e270:
    // 0x39e270: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39e270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x39e274: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x39e274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x39e278: 0xaea800b4  sw          $t0, 0xB4($s5)
    ctx->pc = 0x39e278u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 8));
    // 0x39e27c: 0xac49ad98  sw          $t1, -0x5268($v0)
    ctx->pc = 0x39e27cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x40AD98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40AD98u, _value); } while (0);
    // 0x39e280: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x39e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x39e284: 0xac6a36f0  sw          $t2, 0x36F0($v1)
    ctx->pc = 0x39e284u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x4236F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4236F0u, _value); } while (0);
    // 0x39e288: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x39e288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x39e28c: 0xac4b36ec  sw          $t3, 0x36EC($v0)
    ctx->pc = 0x39e28cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x4236ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4236ECu, _value); } while (0);
    // 0x39e290: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x39e290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x39e294: 0xac6536e8  sw          $a1, 0x36E8($v1)
    ctx->pc = 0x39e294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x4236E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4236E8u, _value); } while (0);
    // 0x39e298: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x39e298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x39e29c: 0xac4636e4  sw          $a2, 0x36E4($v0)
    ctx->pc = 0x39e29cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4236E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4236E4u, _value); } while (0);
    // 0x39e2a0: 0xac673708  sw          $a3, 0x3708($v1)
    ctx->pc = 0x39e2a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x423708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x423708u, _value); } while (0);
    // 0x39e2a4: 0x8e460054  lw          $a2, 0x54($s2)
    ctx->pc = 0x39e2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x39e2a8: 0xc0e7ad2  jal         func_39EB48
    ctx->pc = 0x39E2A8u;
    SET_GPR_U32(ctx, 31, 0x39E2B0u);
    ctx->pc = 0x39E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2A8u;
    // 0x39e2ac: 0x8e450050  lw          $a1, 0x50($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB48u, 0x39E2A8u, 0x39E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E2B0u;
label_39e2b0:
    // 0x39e2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e2b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e2b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e2b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39e2b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e2bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39e2bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39e2c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39e2c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e2c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x39e2c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39e2c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39e2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e2cc: 0x80e5dec  j           func_3977B0
    ctx->pc = 0x39E2CCu;
    ctx->pc = 0x39E2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E2CCu;
    // 0x39e2d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977B0u;
    sub_003977B0_0x3977b0(rdram, ctx, runtime); return;
    ctx->pc = 0x39E2D4u;
    // 0x39e2d4: 0x0  nop
    ctx->pc = 0x39e2d4u;
    // NOP
    ctx->pc = 0x39e2d8u;
}
