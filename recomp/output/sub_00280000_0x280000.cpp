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

// Function: sub_00280000
// Address: 0x280000 - 0x280238
void sub_00280000_0x280000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280000_0x280000");
#endif

    switch (ctx->pc) {
        case 0x280008u: goto label_280008;
        case 0x280018u: goto label_280018;
        case 0x280048u: goto label_280048;
        case 0x280064u: goto label_280064;
        case 0x280088u: goto label_280088;
        case 0x28009cu: goto label_28009c;
        case 0x2800d4u: goto label_2800d4;
        case 0x2800fcu: goto label_2800fc;
        case 0x280128u: goto label_280128;
        case 0x28013cu: goto label_28013c;
        case 0x280168u: goto label_280168;
        case 0x280190u: goto label_280190;
        case 0x2801a8u: goto label_2801a8;
        case 0x2801ccu: goto label_2801cc;
        case 0x2801e0u: goto label_2801e0;
        case 0x28020cu: goto label_28020c;
        case 0x280210u: goto label_280210;
        default: break;
    }

    ctx->pc = 0x280000u;

    // 0x280000: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280000u;
    {
        const bool branch_taken_0x280000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280000) {
            ctx->pc = 0x280018u;
            goto label_280018;
        }
    }
    ctx->pc = 0x280008u;
label_280008:
    // 0x280008: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x280008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28000c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28000cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280010: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x280010u;
    SET_GPR_U32(ctx, 31, 0x280018u);
    ctx->pc = 0x280014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280010u;
    // 0x280014: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x280010u, 0x280018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280018u;
label_280018:
    // 0x280018: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x280018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x28001c: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x28001cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x280020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280028: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x280028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x28002c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28002cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x280030: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x280030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x280034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280038: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x280038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x28003c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28003cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280040: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x280040u;
    SET_GPR_U32(ctx, 31, 0x280048u);
    ctx->pc = 0x280044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280040u;
    // 0x280044: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x280040u, 0x280048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280048u;
label_280048:
    // 0x280048: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x280048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28004c: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x28004cu;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x280050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280054: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x280054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280058: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x280058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28005c: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x28005Cu;
    SET_GPR_U32(ctx, 31, 0x280064u);
    ctx->pc = 0x280060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28005Cu;
    // 0x280060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x28005Cu, 0x280064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280064u;
label_280064:
    // 0x280064: 0x4617b300  add.s       $f12, $f22, $f23
    ctx->pc = 0x280064u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x280068: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x280068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x28006c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28006cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x280070: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x280070u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x280074: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x280074u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x280078: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x280078u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28007c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28007cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280080: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x280080u;
    SET_GPR_U32(ctx, 31, 0x280088u);
    ctx->pc = 0x280084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280080u;
    // 0x280084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x280080u, 0x280088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280088u;
label_280088:
    // 0x280088: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x280088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x28008c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28008cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280090: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x280090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x280094: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x280094u;
    SET_GPR_U32(ctx, 31, 0x28009Cu);
    ctx->pc = 0x280098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280094u;
    // 0x280098: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x280094u, 0x28009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28009Cu;
label_28009c:
    // 0x28009c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28009cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2800a0: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2800a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2800a4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2800a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2800a8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x2800a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x2800ac: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2800acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2800b0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2800b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2800b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2800b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800b8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2800b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2800bc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2800bcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2800c0: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x2800c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x2800c4: 0x3421bc6a  ori         $at, $at, 0xBC6A
    ctx->pc = 0x2800c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48234);
    // 0x2800c8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2800c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2800cc: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x2800CCu;
    SET_GPR_U32(ctx, 31, 0x2800D4u);
    ctx->pc = 0x2800D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2800CCu;
    // 0x2800d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x2800CCu, 0x2800D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800D4u;
label_2800d4:
    // 0x2800d4: 0x3c013f90  lui         $at, 0x3F90
    ctx->pc = 0x2800d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16272 << 16));
    // 0x2800d8: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x2800d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x2800dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2800dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2800e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2800e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2800e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2800e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2800e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800ec: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2800ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2800f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2800f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2800f4: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2800F4u;
    SET_GPR_U32(ctx, 31, 0x2800FCu);
    ctx->pc = 0x2800F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2800F4u;
    // 0x2800f8: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2800F4u, 0x2800FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800FCu;
label_2800fc:
    // 0x2800fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2800fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x280100: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x280100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x280104: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x280104u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x280108: 0x4617b300  add.s       $f12, $f22, $f23
    ctx->pc = 0x280108u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x28010c: 0x26109f90  addiu       $s0, $s0, -0x6070
    ctx->pc = 0x28010cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942608));
    // 0x280110: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x280110u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x280114: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x280114u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x280118: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x280118u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x28011c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280120: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x280120u;
    SET_GPR_U32(ctx, 31, 0x280128u);
    ctx->pc = 0x280124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280120u;
    // 0x280124: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x280120u, 0x280128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280128u;
label_280128:
    // 0x280128: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x280128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x28012c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28012cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280130: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x280130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x280134: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x280134u;
    SET_GPR_U32(ctx, 31, 0x28013Cu);
    ctx->pc = 0x280138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280134u;
    // 0x280138: 0x24050096  addiu       $a1, $zero, 0x96 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x280134u, 0x28013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28013Cu;
label_28013c:
    // 0x28013c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x28013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x280140: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x280140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x280144: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x280144u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x280148: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x280148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x28014c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28014cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x280150: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x280150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x280154: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x280154u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x280158: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x280158u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28015c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28015cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280160: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x280160u;
    SET_GPR_U32(ctx, 31, 0x280168u);
    ctx->pc = 0x280164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280160u;
    // 0x280164: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x280160u, 0x280168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280168u;
label_280168:
    // 0x280168: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x280168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x28016c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x28016cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x280170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x280170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x280174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x280174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280178: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x280178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x28017c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28017cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x280180: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x280180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x280184: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x280184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x280188: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x280188u;
    SET_GPR_U32(ctx, 31, 0x280190u);
    ctx->pc = 0x28018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280188u;
    // 0x28018c: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x280188u, 0x280190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280190u;
label_280190:
    // 0x280190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x280190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280194: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x280194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x280198: 0x4600b581  sub.s       $f22, $f22, $f0
    ctx->pc = 0x280198u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x28019c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28019cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801a0: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2801A0u;
    SET_GPR_U32(ctx, 31, 0x2801A8u);
    ctx->pc = 0x2801A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801A0u;
    // 0x2801a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2801A0u, 0x2801A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801A8u;
label_2801a8:
    // 0x2801a8: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2801a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2801ac: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2801acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2801b0: 0x4617b300  add.s       $f12, $f22, $f23
    ctx->pc = 0x2801b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[23]);
    // 0x2801b4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2801b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2801b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2801b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2801bc: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2801bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2801c0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2801c0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2801c4: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x2801C4u;
    SET_GPR_U32(ctx, 31, 0x2801CCu);
    ctx->pc = 0x2801C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801C4u;
    // 0x2801c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x2801C4u, 0x2801CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801CCu;
label_2801cc:
    // 0x2801cc: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x2801ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2801d0: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2801d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2801d4: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x2801d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2801d8: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x2801D8u;
    SET_GPR_U32(ctx, 31, 0x2801E0u);
    ctx->pc = 0x2801DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2801D8u;
    // 0x2801dc: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x2801D8u, 0x2801E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2801E0u;
label_2801e0:
    // 0x2801e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2801e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2801e4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2801e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2801e8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2801e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x2801ec: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x2801ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x2801f0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2801f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2801f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2801f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2801f8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2801f8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2801fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2801fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280200: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x280200u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x280204: 0xc09f5b6  jal         func_27D6D8
    ctx->pc = 0x280204u;
    SET_GPR_U32(ctx, 31, 0x28020Cu);
    ctx->pc = 0x280208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280204u;
    // 0x280208: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D6D8u, 0x280204u, 0x28020Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28020Cu;
label_28020c:
    // 0x28020c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28020cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_280210:
    // 0x280210: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x280210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x280214: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x280214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280218: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x280218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x28021c: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x28021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x280220: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x280220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x280224: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x280224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x280228: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x280228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28022c: 0x3e00008  jr          $ra
    ctx->pc = 0x28022Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28022Cu;
        // 0x280230: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28022Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280234u;
    // 0x280234: 0x0  nop
    ctx->pc = 0x280234u;
    // NOP
    ctx->pc = 0x280238u;
}
