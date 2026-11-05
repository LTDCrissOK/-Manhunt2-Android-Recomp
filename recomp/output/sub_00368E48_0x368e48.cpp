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

// Function: sub_00368E48
// Address: 0x368e48 - 0x368ff8
void sub_00368E48_0x368e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368E48_0x368e48");
#endif

    switch (ctx->pc) {
        case 0x368e48u: goto label_368e48;
        case 0x368e4cu: goto label_368e4c;
        case 0x368e50u: goto label_368e50;
        case 0x368e54u: goto label_368e54;
        case 0x368e58u: goto label_368e58;
        case 0x368e5cu: goto label_368e5c;
        case 0x368e60u: goto label_368e60;
        case 0x368e64u: goto label_368e64;
        case 0x368e68u: goto label_368e68;
        case 0x368e6cu: goto label_368e6c;
        case 0x368e70u: goto label_368e70;
        case 0x368e74u: goto label_368e74;
        case 0x368e78u: goto label_368e78;
        case 0x368e7cu: goto label_368e7c;
        case 0x368e80u: goto label_368e80;
        case 0x368e84u: goto label_368e84;
        case 0x368e88u: goto label_368e88;
        case 0x368e8cu: goto label_368e8c;
        case 0x368e90u: goto label_368e90;
        case 0x368e94u: goto label_368e94;
        case 0x368e98u: goto label_368e98;
        case 0x368e9cu: goto label_368e9c;
        case 0x368ea0u: goto label_368ea0;
        case 0x368ea4u: goto label_368ea4;
        case 0x368ea8u: goto label_368ea8;
        case 0x368eacu: goto label_368eac;
        case 0x368eb0u: goto label_368eb0;
        case 0x368eb4u: goto label_368eb4;
        case 0x368eb8u: goto label_368eb8;
        case 0x368ebcu: goto label_368ebc;
        case 0x368ec0u: goto label_368ec0;
        case 0x368ec4u: goto label_368ec4;
        case 0x368ec8u: goto label_368ec8;
        case 0x368eccu: goto label_368ecc;
        case 0x368ed0u: goto label_368ed0;
        case 0x368ed4u: goto label_368ed4;
        case 0x368ed8u: goto label_368ed8;
        case 0x368edcu: goto label_368edc;
        case 0x368ee0u: goto label_368ee0;
        case 0x368ee4u: goto label_368ee4;
        case 0x368ee8u: goto label_368ee8;
        case 0x368eecu: goto label_368eec;
        case 0x368ef0u: goto label_368ef0;
        case 0x368ef4u: goto label_368ef4;
        case 0x368ef8u: goto label_368ef8;
        case 0x368efcu: goto label_368efc;
        case 0x368f00u: goto label_368f00;
        case 0x368f04u: goto label_368f04;
        case 0x368f08u: goto label_368f08;
        case 0x368f0cu: goto label_368f0c;
        case 0x368f10u: goto label_368f10;
        case 0x368f14u: goto label_368f14;
        case 0x368f18u: goto label_368f18;
        case 0x368f1cu: goto label_368f1c;
        case 0x368f20u: goto label_368f20;
        case 0x368f24u: goto label_368f24;
        case 0x368f28u: goto label_368f28;
        case 0x368f2cu: goto label_368f2c;
        case 0x368f30u: goto label_368f30;
        case 0x368f34u: goto label_368f34;
        case 0x368f38u: goto label_368f38;
        case 0x368f3cu: goto label_368f3c;
        case 0x368f40u: goto label_368f40;
        case 0x368f44u: goto label_368f44;
        case 0x368f48u: goto label_368f48;
        case 0x368f4cu: goto label_368f4c;
        case 0x368f50u: goto label_368f50;
        case 0x368f54u: goto label_368f54;
        case 0x368f58u: goto label_368f58;
        case 0x368f5cu: goto label_368f5c;
        case 0x368f60u: goto label_368f60;
        case 0x368f64u: goto label_368f64;
        case 0x368f68u: goto label_368f68;
        case 0x368f6cu: goto label_368f6c;
        case 0x368f70u: goto label_368f70;
        case 0x368f74u: goto label_368f74;
        case 0x368f78u: goto label_368f78;
        case 0x368f7cu: goto label_368f7c;
        case 0x368f80u: goto label_368f80;
        case 0x368f84u: goto label_368f84;
        case 0x368f88u: goto label_368f88;
        case 0x368f8cu: goto label_368f8c;
        case 0x368f90u: goto label_368f90;
        case 0x368f94u: goto label_368f94;
        case 0x368f98u: goto label_368f98;
        case 0x368f9cu: goto label_368f9c;
        case 0x368fa0u: goto label_368fa0;
        case 0x368fa4u: goto label_368fa4;
        case 0x368fa8u: goto label_368fa8;
        case 0x368facu: goto label_368fac;
        case 0x368fb0u: goto label_368fb0;
        case 0x368fb4u: goto label_368fb4;
        case 0x368fb8u: goto label_368fb8;
        case 0x368fbcu: goto label_368fbc;
        case 0x368fc0u: goto label_368fc0;
        case 0x368fc4u: goto label_368fc4;
        case 0x368fc8u: goto label_368fc8;
        case 0x368fccu: goto label_368fcc;
        case 0x368fd0u: goto label_368fd0;
        case 0x368fd4u: goto label_368fd4;
        case 0x368fd8u: goto label_368fd8;
        case 0x368fdcu: goto label_368fdc;
        case 0x368fe0u: goto label_368fe0;
        case 0x368fe4u: goto label_368fe4;
        case 0x368fe8u: goto label_368fe8;
        case 0x368fecu: goto label_368fec;
        case 0x368ff0u: goto label_368ff0;
        case 0x368ff4u: goto label_368ff4;
        default: break;
    }

    ctx->pc = 0x368e48u;

label_368e48:
    // 0x368e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_368e4c:
    // 0x368e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_368e50:
    // 0x368e50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_368e54:
    // 0x368e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_368e58:
    // 0x368e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_368e5c:
    // 0x368e5c: 0xc0f4726  jal         func_3D1C98
label_368e60:
    if (ctx->pc == 0x368E60u) {
        ctx->pc = 0x368E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E5Cu;
        // 0x368e60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368E64u;
        goto label_368e64;
    }
    ctx->pc = 0x368E5Cu;
    SET_GPR_U32(ctx, 31, 0x368E64u);
    ctx->pc = 0x368E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E5Cu;
    // 0x368e60: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1C98u, 0x368E5Cu, 0x368E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E64u;
label_368e64:
    // 0x368e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_368e68:
    // 0x368e68: 0xc09db7e  jal         func_276DF8
label_368e6c:
    if (ctx->pc == 0x368E6Cu) {
        ctx->pc = 0x368E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E68u;
        // 0x368e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368E70u;
        goto label_368e70;
    }
    ctx->pc = 0x368E68u;
    SET_GPR_U32(ctx, 31, 0x368E70u);
    ctx->pc = 0x368E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E68u;
    // 0x368e6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276DF8u, 0x368E68u, 0x368E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E70u;
label_368e70:
    // 0x368e70: 0xc0da286  jal         func_368A18
label_368e74:
    if (ctx->pc == 0x368E74u) {
        ctx->pc = 0x368E78u;
        goto label_368e78;
    }
    ctx->pc = 0x368E70u;
    SET_GPR_U32(ctx, 31, 0x368E78u);
    ctx->pc = 0x368A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A18u, 0x368E70u, 0x368E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E78u;
label_368e78:
    // 0x368e78: 0xc0da2d6  jal         func_368B58
label_368e7c:
    if (ctx->pc == 0x368E7Cu) {
        ctx->pc = 0x368E80u;
        goto label_368e80;
    }
    ctx->pc = 0x368E78u;
    SET_GPR_U32(ctx, 31, 0x368E80u);
    ctx->pc = 0x368B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368B58u, 0x368E78u, 0x368E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E80u;
label_368e80:
    // 0x368e80: 0xc082e8e  jal         func_20BA38
label_368e84:
    if (ctx->pc == 0x368E84u) {
        ctx->pc = 0x368E88u;
        goto label_368e88;
    }
    ctx->pc = 0x368E80u;
    SET_GPR_U32(ctx, 31, 0x368E88u);
    ctx->pc = 0x20BA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA38u, 0x368E80u, 0x368E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E88u;
label_368e88:
    // 0x368e88: 0xc082e9e  jal         func_20BA78
label_368e8c:
    if (ctx->pc == 0x368E8Cu) {
        ctx->pc = 0x368E90u;
        goto label_368e90;
    }
    ctx->pc = 0x368E88u;
    SET_GPR_U32(ctx, 31, 0x368E90u);
    ctx->pc = 0x20BA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BA78u, 0x368E88u, 0x368E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E90u;
label_368e90:
    // 0x368e90: 0xc0dbb0c  jal         func_36EC30
label_368e94:
    if (ctx->pc == 0x368E94u) {
        ctx->pc = 0x368E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E90u;
        // 0x368e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368E98u;
        goto label_368e98;
    }
    ctx->pc = 0x368E90u;
    SET_GPR_U32(ctx, 31, 0x368E98u);
    ctx->pc = 0x368E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E90u;
    // 0x368e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36EC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EC30u, 0x368E90u, 0x368E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E98u;
label_368e98:
    // 0x368e98: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_368e9c:
    if (ctx->pc == 0x368E9Cu) {
        ctx->pc = 0x368E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E98u;
        // 0x368e9c: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368EA0u;
        goto label_368ea0;
    }
    ctx->pc = 0x368E98u;
    {
        const bool branch_taken_0x368e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E98u;
        // 0x368e9c: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e98) {
            ctx->pc = 0x368F00u;
            goto label_368f00;
        }
    }
    ctx->pc = 0x368EA0u;
label_368ea0:
    // 0x368ea0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x368ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_368ea4:
    // 0x368ea4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x368ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_368ea8:
    // 0x368ea8: 0xc0db316  jal         func_36CC58
label_368eac:
    if (ctx->pc == 0x368EACu) {
        ctx->pc = 0x368EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EA8u;
        // 0x368eac: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368EB0u;
        goto label_368eb0;
    }
    ctx->pc = 0x368EA8u;
    SET_GPR_U32(ctx, 31, 0x368EB0u);
    ctx->pc = 0x368EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EA8u;
    // 0x368eac: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CC58u, 0x368EA8u, 0x368EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EB0u;
label_368eb0:
    // 0x368eb0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_368eb4:
    if (ctx->pc == 0x368EB4u) {
        ctx->pc = 0x368EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EB0u;
        // 0x368eb4: 0xae02f000  sw          $v0, -0x1000($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368EB8u;
        goto label_368eb8;
    }
    ctx->pc = 0x368EB0u;
    {
        const bool branch_taken_0x368eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EB0u;
        // 0x368eb4: 0xae02f000  sw          $v0, -0x1000($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368eb0) {
            ctx->pc = 0x368FE0u;
            goto label_368fe0;
        }
    }
    ctx->pc = 0x368EB8u;
label_368eb8:
    // 0x368eb8: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x368eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
label_368ebc:
    // 0x368ebc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x368ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_368ec0:
    // 0x368ec0: 0xc0db35a  jal         func_36CD68
label_368ec4:
    if (ctx->pc == 0x368EC4u) {
        ctx->pc = 0x368EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EC0u;
        // 0x368ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368EC8u;
        goto label_368ec8;
    }
    ctx->pc = 0x368EC0u;
    SET_GPR_U32(ctx, 31, 0x368EC8u);
    ctx->pc = 0x368EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EC0u;
    // 0x368ec4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CD68u, 0x368EC0u, 0x368EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EC8u;
label_368ec8:
    // 0x368ec8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x368ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_368ecc:
    // 0x368ecc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x368eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_368ed0:
    // 0x368ed0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x368ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_368ed4:
    // 0x368ed4: 0xc0db358  jal         func_36CD60
label_368ed8:
    if (ctx->pc == 0x368ED8u) {
        ctx->pc = 0x368ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368ED4u;
        // 0x368ed8: 0x8e04f000  lw          $a0, -0x1000($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963200)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368EDCu;
        goto label_368edc;
    }
    ctx->pc = 0x368ED4u;
    SET_GPR_U32(ctx, 31, 0x368EDCu);
    ctx->pc = 0x368ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368ED4u;
    // 0x368ed8: 0x8e04f000  lw          $a0, -0x1000($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963200)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CD60u, 0x368ED4u, 0x368EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368EDCu;
label_368edc:
    // 0x368edc: 0x8e04f000  lw          $a0, -0x1000($s0)
    ctx->pc = 0x368edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963200)));
label_368ee0:
    // 0x368ee0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x368ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_368ee4:
    // 0x368ee4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x368ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_368ee8:
    // 0x368ee8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x368ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_368eec:
    // 0x368eec: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x368eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
label_368ef0:
    // 0x368ef0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x368ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_368ef4:
    // 0x368ef4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x368ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_368ef8:
    // 0x368ef8: 0xc0db2f8  jal         func_36CBE0
label_368efc:
    if (ctx->pc == 0x368EFCu) {
        ctx->pc = 0x368EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368EF8u;
        // 0x368efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F00u;
        goto label_368f00;
    }
    ctx->pc = 0x368EF8u;
    SET_GPR_U32(ctx, 31, 0x368F00u);
    ctx->pc = 0x368EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368EF8u;
    // 0x368efc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CBE0u, 0x368EF8u, 0x368F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F00u;
label_368f00:
    // 0x368f00: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x368f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_368f04:
    // 0x368f04: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x368f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_368f08:
    // 0x368f08: 0x2442ef80  addiu       $v0, $v0, -0x1080
    ctx->pc = 0x368f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963072));
label_368f0c:
    // 0x368f0c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x368f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_368f10:
    // 0x368f10: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_368f14:
    if (ctx->pc == 0x368F14u) {
        ctx->pc = 0x368F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F10u;
        // 0x368f14: 0xac62cba8  sw          $v0, -0x3458($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F18u;
        goto label_368f18;
    }
    ctx->pc = 0x368F10u;
    {
        const bool branch_taken_0x368f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F10u;
        // 0x368f14: 0xac62cba8  sw          $v0, -0x3458($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f10) {
            ctx->pc = 0x368FE0u;
            goto label_368fe0;
        }
    }
    ctx->pc = 0x368F18u;
label_368f18:
    // 0x368f18: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x368f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_368f1c:
    // 0x368f1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x368f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_368f20:
    // 0x368f20: 0xc0ae64c  jal         func_2B9930
label_368f24:
    if (ctx->pc == 0x368F24u) {
        ctx->pc = 0x368F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F20u;
        // 0x368f24: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F28u;
        goto label_368f28;
    }
    ctx->pc = 0x368F20u;
    SET_GPR_U32(ctx, 31, 0x368F28u);
    ctx->pc = 0x368F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F20u;
    // 0x368f24: 0x24844d40  addiu       $a0, $a0, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9930u, 0x368F20u, 0x368F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F28u;
label_368f28:
    // 0x368f28: 0x8e04cba8  lw          $a0, -0x3458($s0)
    ctx->pc = 0x368f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_368f2c:
    // 0x368f2c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x368f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_368f30:
    // 0x368f30: 0x2442efd0  addiu       $v0, $v0, -0x1030
    ctx->pc = 0x368f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963152));
label_368f34:
    // 0x368f34: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x368f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_368f38:
    // 0x368f38: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x368f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_368f3c:
    // 0x368f3c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x368f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_368f40:
    // 0x368f40: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x368f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_368f44:
    // 0x368f44: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x368f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_368f48:
    // 0x368f48: 0x40f809  jalr        $v0
label_368f4c:
    if (ctx->pc == 0x368F4Cu) {
        ctx->pc = 0x368F50u;
        goto label_368f50;
    }
    ctx->pc = 0x368F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x368F50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368F48u, 0x368F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x368F50u;
label_368f50:
    // 0x368f50: 0x8e04cba8  lw          $a0, -0x3458($s0)
    ctx->pc = 0x368f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_368f54:
    // 0x368f54: 0xc082b1e  jal         func_20AC78
label_368f58:
    if (ctx->pc == 0x368F58u) {
        ctx->pc = 0x368F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F54u;
        // 0x368f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F5Cu;
        goto label_368f5c;
    }
    ctx->pc = 0x368F54u;
    SET_GPR_U32(ctx, 31, 0x368F5Cu);
    ctx->pc = 0x368F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F54u;
    // 0x368f58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AC78u, 0x368F54u, 0x368F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F5Cu;
label_368f5c:
    // 0x368f5c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_368f60:
    if (ctx->pc == 0x368F60u) {
        ctx->pc = 0x368F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F5Cu;
        // 0x368f60: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F64u;
        goto label_368f64;
    }
    ctx->pc = 0x368F5Cu;
    {
        const bool branch_taken_0x368f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F5Cu;
        // 0x368f60: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f5c) {
            ctx->pc = 0x368FE0u;
            goto label_368fe0;
        }
    }
    ctx->pc = 0x368F64u;
label_368f64:
    // 0x368f64: 0xc07f482  jal         func_1FD208
label_368f68:
    if (ctx->pc == 0x368F68u) {
        ctx->pc = 0x368F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F64u;
        // 0x368f68: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F6Cu;
        goto label_368f6c;
    }
    ctx->pc = 0x368F64u;
    SET_GPR_U32(ctx, 31, 0x368F6Cu);
    ctx->pc = 0x368F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F64u;
    // 0x368f68: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD208u, 0x368F64u, 0x368F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F6Cu;
label_368f6c:
    // 0x368f6c: 0x8e04cba8  lw          $a0, -0x3458($s0)
    ctx->pc = 0x368f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_368f70:
    // 0x368f70: 0xc082b3e  jal         func_20ACF8
label_368f74:
    if (ctx->pc == 0x368F74u) {
        ctx->pc = 0x368F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F70u;
        // 0x368f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F78u;
        goto label_368f78;
    }
    ctx->pc = 0x368F70u;
    SET_GPR_U32(ctx, 31, 0x368F78u);
    ctx->pc = 0x368F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F70u;
    // 0x368f74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20ACF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ACF8u, 0x368F70u, 0x368F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F78u;
label_368f78:
    // 0x368f78: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_368f7c:
    if (ctx->pc == 0x368F7Cu) {
        ctx->pc = 0x368F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F78u;
        // 0x368f7c: 0x8e04cba8  lw          $a0, -0x3458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F80u;
        goto label_368f80;
    }
    ctx->pc = 0x368F78u;
    {
        const bool branch_taken_0x368f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F78u;
        // 0x368f7c: 0x8e04cba8  lw          $a0, -0x3458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f78) {
            ctx->pc = 0x368FE0u;
            goto label_368fe0;
        }
    }
    ctx->pc = 0x368F80u;
label_368f80:
    // 0x368f80: 0xc082c0a  jal         func_20B028
label_368f84:
    if (ctx->pc == 0x368F84u) {
        ctx->pc = 0x368F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F80u;
        // 0x368f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368F88u;
        goto label_368f88;
    }
    ctx->pc = 0x368F80u;
    SET_GPR_U32(ctx, 31, 0x368F88u);
    ctx->pc = 0x368F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F80u;
    // 0x368f84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B028u, 0x368F80u, 0x368F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F88u;
label_368f88:
    // 0x368f88: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x368f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_368f8c:
    // 0x368f8c: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x368f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_368f90:
    // 0x368f90: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x368f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_368f94:
    // 0x368f94: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x368f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_368f98:
    // 0x368f98: 0x40f809  jalr        $v0
label_368f9c:
    if (ctx->pc == 0x368F9Cu) {
        ctx->pc = 0x368FA0u;
        goto label_368fa0;
    }
    ctx->pc = 0x368F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x368FA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368F98u, 0x368FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x368FA0u;
label_368fa0:
    // 0x368fa0: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x368fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_368fa4:
    // 0x368fa4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x368fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_368fa8:
    // 0x368fa8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_368fac:
    if (ctx->pc == 0x368FACu) {
        ctx->pc = 0x368FB0u;
        goto label_368fb0;
    }
    ctx->pc = 0x368FA8u;
    {
        const bool branch_taken_0x368fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x368fa8) {
            ctx->pc = 0x368FD0u;
            goto label_368fd0;
        }
    }
    ctx->pc = 0x368FB0u;
label_368fb0:
    // 0x368fb0: 0xc0ae65e  jal         func_2B9978
label_368fb4:
    if (ctx->pc == 0x368FB4u) {
        ctx->pc = 0x368FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FB0u;
        // 0x368fb4: 0x26244d40  addiu       $a0, $s1, 0x4D40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368FB8u;
        goto label_368fb8;
    }
    ctx->pc = 0x368FB0u;
    SET_GPR_U32(ctx, 31, 0x368FB8u);
    ctx->pc = 0x368FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368FB0u;
    // 0x368fb4: 0x26244d40  addiu       $a0, $s1, 0x4D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 19776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9978u, 0x368FB0u, 0x368FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FB8u;
label_368fb8:
    // 0x368fb8: 0xc0da384  jal         func_368E10
label_368fbc:
    if (ctx->pc == 0x368FBCu) {
        ctx->pc = 0x368FC0u;
        goto label_368fc0;
    }
    ctx->pc = 0x368FB8u;
    SET_GPR_U32(ctx, 31, 0x368FC0u);
    ctx->pc = 0x368E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E10u, 0x368FB8u, 0x368FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FC0u;
label_368fc0:
    // 0x368fc0: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x368fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_368fc4:
    // 0x368fc4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x368fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_368fc8:
    // 0x368fc8: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
label_368fcc:
    if (ctx->pc == 0x368FCCu) {
        ctx->pc = 0x368FD0u;
        goto label_368fd0;
    }
    ctx->pc = 0x368FC8u;
    {
        const bool branch_taken_0x368fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x368fc8) {
            ctx->pc = 0x368FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368fb0;
        }
    }
    ctx->pc = 0x368FD0u;
label_368fd0:
    // 0x368fd0: 0xc082b5e  jal         func_20AD78
label_368fd4:
    if (ctx->pc == 0x368FD4u) {
        ctx->pc = 0x368FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FD0u;
        // 0x368fd4: 0x8e04cba8  lw          $a0, -0x3458($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368FD8u;
        goto label_368fd8;
    }
    ctx->pc = 0x368FD0u;
    SET_GPR_U32(ctx, 31, 0x368FD8u);
    ctx->pc = 0x368FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368FD0u;
    // 0x368fd4: 0x8e04cba8  lw          $a0, -0x3458($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AD78u, 0x368FD0u, 0x368FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FD8u;
label_368fd8:
    // 0x368fd8: 0xc0b2a6c  jal         func_2CA9B0
label_368fdc:
    if (ctx->pc == 0x368FDCu) {
        ctx->pc = 0x368FE0u;
        goto label_368fe0;
    }
    ctx->pc = 0x368FD8u;
    SET_GPR_U32(ctx, 31, 0x368FE0u);
    ctx->pc = 0x2CA9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9B0u, 0x368FD8u, 0x368FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368FE0u;
label_368fe0:
    // 0x368fe0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_368fe4:
    // 0x368fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_368fe8:
    // 0x368fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_368fec:
    // 0x368fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_368ff0:
    // 0x368ff0: 0x3e00008  jr          $ra
label_368ff4:
    if (ctx->pc == 0x368FF4u) {
        ctx->pc = 0x368FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FF0u;
        // 0x368ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x368FF8u;
        goto label_fallthrough_0x368ff0;
    }
    ctx->pc = 0x368FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FF0u;
        // 0x368ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x368ff0:
    ctx->pc = 0x368FF8u;
}
