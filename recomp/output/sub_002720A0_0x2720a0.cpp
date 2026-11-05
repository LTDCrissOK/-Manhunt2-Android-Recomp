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

// Function: sub_002720A0
// Address: 0x2720a0 - 0x272258
void sub_002720A0_0x2720a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002720A0_0x2720a0");
#endif

    switch (ctx->pc) {
        case 0x2720c4u: goto label_2720c4;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720f0u: goto label_2720f0;
        case 0x272108u: goto label_272108;
        case 0x272120u: goto label_272120;
        case 0x272138u: goto label_272138;
        case 0x272150u: goto label_272150;
        case 0x272168u: goto label_272168;
        case 0x272180u: goto label_272180;
        case 0x272198u: goto label_272198;
        case 0x2721b0u: goto label_2721b0;
        case 0x2721c8u: goto label_2721c8;
        case 0x2721e0u: goto label_2721e0;
        case 0x2721f8u: goto label_2721f8;
        case 0x272210u: goto label_272210;
        case 0x272228u: goto label_272228;
        case 0x272238u: goto label_272238;
        default: break;
    }

    ctx->pc = 0x2720a0u;

    // 0x2720a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2720a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2720a4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2720a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2720a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2720a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2720acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2720b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2720b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2720b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2720b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720b8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2720b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2720bc: 0xc0b5ec8  jal         func_2D7B20
    ctx->pc = 0x2720BCu;
    SET_GPR_U32(ctx, 31, 0x2720C4u);
    ctx->pc = 0x2720C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720BCu;
    // 0x2720c0: 0x26320230  addiu       $s2, $s1, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B20u, 0x2720BCu, 0x2720C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720C4u;
label_2720c4:
    // 0x2720c4: 0x8e260224  lw          $a2, 0x224($s1)
    ctx->pc = 0x2720c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x2720c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2720c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2720cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2720ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720d0: 0xc0b5ef6  jal         func_2D7BD8
    ctx->pc = 0x2720D0u;
    SET_GPR_U32(ctx, 31, 0x2720D8u);
    ctx->pc = 0x2720D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720D0u;
    // 0x2720d4: 0x24a57f90  addiu       $a1, $a1, 0x7F90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7BD8u, 0x2720D0u, 0x2720D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720D8u;
label_2720d8:
    // 0x2720d8: 0x8e260228  lw          $a2, 0x228($s1)
    ctx->pc = 0x2720d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
    // 0x2720dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2720dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2720e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2720e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720e4: 0x24a57fa0  addiu       $a1, $a1, 0x7FA0
    ctx->pc = 0x2720e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32672));
    // 0x2720e8: 0xc0b5ed6  jal         func_2D7B58
    ctx->pc = 0x2720E8u;
    SET_GPR_U32(ctx, 31, 0x2720F0u);
    ctx->pc = 0x2720ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720E8u;
    // 0x2720ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B58u, 0x2720E8u, 0x2720F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720F0u;
label_2720f0:
    // 0x2720f0: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x2720f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2720f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2720f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2720f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2720f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2720fc: 0x24a57fb8  addiu       $a1, $a1, 0x7FB8
    ctx->pc = 0x2720fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32696));
    // 0x272100: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272100u;
    SET_GPR_U32(ctx, 31, 0x272108u);
    ctx->pc = 0x272104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272100u;
    // 0x272104: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272100u, 0x272108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272108u;
label_272108:
    // 0x272108: 0xc64c0014  lwc1        $f12, 0x14($s2)
    ctx->pc = 0x272108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27210c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x27210cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x272110: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272114: 0x24a57fd8  addiu       $a1, $a1, 0x7FD8
    ctx->pc = 0x272114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32728));
    // 0x272118: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272118u;
    SET_GPR_U32(ctx, 31, 0x272120u);
    ctx->pc = 0x27211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272118u;
    // 0x27211c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272118u, 0x272120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272120u;
label_272120:
    // 0x272120: 0xc62c0250  lwc1        $f12, 0x250($s1)
    ctx->pc = 0x272120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272124: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x272124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x272128: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27212c: 0x24a57ff8  addiu       $a1, $a1, 0x7FF8
    ctx->pc = 0x27212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32760));
    // 0x272130: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272130u;
    SET_GPR_U32(ctx, 31, 0x272138u);
    ctx->pc = 0x272134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272130u;
    // 0x272134: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272130u, 0x272138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272138u;
label_272138:
    // 0x272138: 0xc62c0254  lwc1        $f12, 0x254($s1)
    ctx->pc = 0x272138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27213c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27213cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272144: 0x24a58008  addiu       $a1, $a1, -0x7FF8
    ctx->pc = 0x272144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934536));
    // 0x272148: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272148u;
    SET_GPR_U32(ctx, 31, 0x272150u);
    ctx->pc = 0x27214Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272148u;
    // 0x27214c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272148u, 0x272150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272150u;
label_272150:
    // 0x272150: 0xc62c0258  lwc1        $f12, 0x258($s1)
    ctx->pc = 0x272150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272154: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272158: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27215c: 0x24a58018  addiu       $a1, $a1, -0x7FE8
    ctx->pc = 0x27215cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934552));
    // 0x272160: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272160u;
    SET_GPR_U32(ctx, 31, 0x272168u);
    ctx->pc = 0x272164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272160u;
    // 0x272164: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272160u, 0x272168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272168u;
label_272168:
    // 0x272168: 0xc62c02b0  lwc1        $f12, 0x2B0($s1)
    ctx->pc = 0x272168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27216c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27216cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272174: 0x24a58028  addiu       $a1, $a1, -0x7FD8
    ctx->pc = 0x272174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934568));
    // 0x272178: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272178u;
    SET_GPR_U32(ctx, 31, 0x272180u);
    ctx->pc = 0x27217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272178u;
    // 0x27217c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272178u, 0x272180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272180u;
label_272180:
    // 0x272180: 0xc62c02b4  lwc1        $f12, 0x2B4($s1)
    ctx->pc = 0x272180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x272184: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272188: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27218c: 0x24a58038  addiu       $a1, $a1, -0x7FC8
    ctx->pc = 0x27218cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934584));
    // 0x272190: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272190u;
    SET_GPR_U32(ctx, 31, 0x272198u);
    ctx->pc = 0x272194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272190u;
    // 0x272194: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272190u, 0x272198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272198u;
label_272198:
    // 0x272198: 0xc62c0280  lwc1        $f12, 0x280($s1)
    ctx->pc = 0x272198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27219c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27219cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2721a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2721a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721a4: 0x24a58048  addiu       $a1, $a1, -0x7FB8
    ctx->pc = 0x2721a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934600));
    // 0x2721a8: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x2721A8u;
    SET_GPR_U32(ctx, 31, 0x2721B0u);
    ctx->pc = 0x2721ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721A8u;
    // 0x2721ac: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x2721A8u, 0x2721B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721B0u;
label_2721b0:
    // 0x2721b0: 0xc62c0284  lwc1        $f12, 0x284($s1)
    ctx->pc = 0x2721b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2721b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2721b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2721b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2721b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721bc: 0x24a58058  addiu       $a1, $a1, -0x7FA8
    ctx->pc = 0x2721bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934616));
    // 0x2721c0: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x2721C0u;
    SET_GPR_U32(ctx, 31, 0x2721C8u);
    ctx->pc = 0x2721C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721C0u;
    // 0x2721c4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x2721C0u, 0x2721C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721C8u;
label_2721c8:
    // 0x2721c8: 0xc62c0288  lwc1        $f12, 0x288($s1)
    ctx->pc = 0x2721c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2721cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2721ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2721d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2721d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721d4: 0x24a58068  addiu       $a1, $a1, -0x7F98
    ctx->pc = 0x2721d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934632));
    // 0x2721d8: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x2721D8u;
    SET_GPR_U32(ctx, 31, 0x2721E0u);
    ctx->pc = 0x2721DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721D8u;
    // 0x2721dc: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x2721D8u, 0x2721E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721E0u;
label_2721e0:
    // 0x2721e0: 0xc62c02b8  lwc1        $f12, 0x2B8($s1)
    ctx->pc = 0x2721e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2721e4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2721e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2721e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2721ec: 0x24a58078  addiu       $a1, $a1, -0x7F88
    ctx->pc = 0x2721ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934648));
    // 0x2721f0: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x2721F0u;
    SET_GPR_U32(ctx, 31, 0x2721F8u);
    ctx->pc = 0x2721F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2721F0u;
    // 0x2721f4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x2721F0u, 0x2721F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2721F8u;
label_2721f8:
    // 0x2721f8: 0xc62c02bc  lwc1        $f12, 0x2BC($s1)
    ctx->pc = 0x2721f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2721fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2721fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272200: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272204: 0x24a58088  addiu       $a1, $a1, -0x7F78
    ctx->pc = 0x272204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934664));
    // 0x272208: 0xc0b5f16  jal         func_2D7C58
    ctx->pc = 0x272208u;
    SET_GPR_U32(ctx, 31, 0x272210u);
    ctx->pc = 0x27220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272208u;
    // 0x27220c: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7C58u, 0x272208u, 0x272210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272210u;
label_272210:
    // 0x272210: 0x8e2602c0  lw          $a2, 0x2C0($s1)
    ctx->pc = 0x272210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x272214: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x272214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x272218: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x272218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27221c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x27221cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x272220: 0xc0b5ed6  jal         func_2D7B58
    ctx->pc = 0x272220u;
    SET_GPR_U32(ctx, 31, 0x272228u);
    ctx->pc = 0x272224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272220u;
    // 0x272224: 0x24a58098  addiu       $a1, $a1, -0x7F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B58u, 0x272220u, 0x272228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272228u;
label_272228:
    // 0x272228: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x272228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27222c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272230: 0xc0b5ecc  jal         func_2D7B30
    ctx->pc = 0x272230u;
    SET_GPR_U32(ctx, 31, 0x272238u);
    ctx->pc = 0x272234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272230u;
    // 0x272234: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7B30u, 0x272230u, 0x272238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272238u;
label_272238:
    // 0x272238: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x272238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27223c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27223cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x272240: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x272240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272244: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x272244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272248: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x272248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27224c: 0x3e00008  jr          $ra
    ctx->pc = 0x27224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27224Cu;
        // 0x272250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27224Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272254u;
    // 0x272254: 0x0  nop
    ctx->pc = 0x272254u;
    // NOP
    ctx->pc = 0x272258u;
}
