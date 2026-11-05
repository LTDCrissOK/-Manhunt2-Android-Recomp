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

// Function: sub_003D08A0
// Address: 0x3d08a0 - 0x3d0a30
void sub_003D08A0_0x3d08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D08A0_0x3d08a0");
#endif

    switch (ctx->pc) {
        case 0x3d08e8u: goto label_3d08e8;
        case 0x3d0950u: goto label_3d0950;
        case 0x3d09bcu: goto label_3d09bc;
        case 0x3d09f0u: goto label_3d09f0;
        default: break;
    }

    ctx->pc = 0x3d08a0u;

    // 0x3d08a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d08a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d08a4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3d08a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d08a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d08ac: 0x2442e640  addiu       $v0, $v0, -0x19C0
    ctx->pc = 0x3d08acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x3d08b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d08b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d08b4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3d08b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d08b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d08b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d08bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d08bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d08c0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3d08c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42E65Cu));
    // 0x3d08c4: 0x4610054  bgez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3D08C4u;
    {
        const bool branch_taken_0x3d08c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3D08C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D08C4u;
        // 0x3d08c8: 0x8c460018  lw          $a2, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d08c4) {
            ctx->pc = 0x3D0A18u;
            goto label_3d0a18;
        }
    }
    ctx->pc = 0x3D08CCu;
    // 0x3d08cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3d08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3d08d0: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x3d08d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x3d08d4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3d08d4u;
    SET_GPR_S32(ctx, 18, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x3d08d8: 0x54c0000c  bnel        $a2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3D08D8u;
    {
        const bool branch_taken_0x3d08d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d08d8) {
            ctx->pc = 0x3D08DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D08D8u;
            // 0x3d08dc: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D090Cu;
            goto label_3d090c;
        }
    }
    ctx->pc = 0x3D08E0u;
    // 0x3d08e0: 0xc0f41a6  jal         func_3D0698
    ctx->pc = 0x3D08E0u;
    SET_GPR_U32(ctx, 31, 0x3D08E8u);
    ctx->pc = 0x3D08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D08E0u;
    // 0x3d08e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0698u, 0x3D08E0u, 0x3D08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D08E8u;
label_3d08e8:
    // 0x3d08e8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d08e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3d08ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d08ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d08f0: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3d08f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3d08f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d08f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d08f8: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x3d08f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3d08fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d08fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0900: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d0900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0904: 0x80f41a2  j           func_3D0688
    ctx->pc = 0x3D0904u;
    ctx->pc = 0x3D0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0904u;
    // 0x3d0908: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    sub_003D0688_0x3d0688(rdram, ctx, runtime); return;
    ctx->pc = 0x3D090Cu;
label_3d090c:
    // 0x3d090c: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x3d090cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3d0910: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x3d0910u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d0914: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3d0914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3d0918: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3d0918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d091c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D091Cu;
    {
        const bool branch_taken_0x3d091c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D091Cu;
        // 0x3d0920: 0x44802f  dsubu       $s0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d091c) {
            ctx->pc = 0x3D0984u;
            goto label_3d0984;
        }
    }
    ctx->pc = 0x3D0924u;
    // 0x3d0924: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3d0924u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3d0928: 0x66037333  daddiu      $v1, $s0, 0x7333
    ctx->pc = 0x3d0928u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
    // 0x3d092c: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3d092cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3d0930: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3d0930u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d0934: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3d0934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3d0938: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3d0938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3d093c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3d093cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d0940: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D0940u;
    {
        const bool branch_taken_0x3d0940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0940u;
        // 0x3d0944: 0x32510003  andi        $s1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0940) {
            ctx->pc = 0x3D0984u;
            goto label_3d0984;
        }
    }
    ctx->pc = 0x3D0948u;
    // 0x3d0948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d0948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d094c: 0x0  nop
    ctx->pc = 0x3d094cu;
    // NOP
label_3d0950:
    // 0x3d0950: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3d0950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3d0954: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3D0954u;
    {
        const bool branch_taken_0x3d0954 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0954u;
        // 0x3d0958: 0x66037333  daddiu      $v1, $s0, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0954) {
            ctx->pc = 0x3D0988u;
            goto label_3d0988;
        }
    }
    ctx->pc = 0x3D095Cu;
    // 0x3d095c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x3d095cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3d0960: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x3d0960u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3d0964: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x3d0964u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3d0968: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3d0968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3d096c: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x3d096cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
    // 0x3d0970: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3d0970u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d0974: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D0974u;
    {
        const bool branch_taken_0x3d0974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d0974) {
            ctx->pc = 0x3D0978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0974u;
            // 0x3d0978: 0x207102f  dsubu       $v0, $s0, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D098Cu;
            goto label_3d098c;
        }
    }
    ctx->pc = 0x3D097Cu;
    // 0x3d097c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x3D097Cu;
    {
        const bool branch_taken_0x3d097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D097Cu;
        // 0x3d0980: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d097c) {
            ctx->pc = 0x3D0950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0950;
        }
    }
    ctx->pc = 0x3D0984u;
label_3d0984:
    // 0x3d0984: 0x32510003  andi        $s1, $s2, 0x3
    ctx->pc = 0x3d0984u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
label_3d0988:
    // 0x3d0988: 0x207102f  dsubu       $v0, $s0, $a3
    ctx->pc = 0x3d0988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) - GPR_U64(ctx, 7));
label_3d098c:
    // 0x3d098c: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x3d098cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
    // 0x3d0990: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3D0990u;
    {
        const bool branch_taken_0x3d0990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0990u;
        // 0x3d0994: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0990) {
            ctx->pc = 0x3D09E0u;
            goto label_3d09e0;
        }
    }
    ctx->pc = 0x3D0998u;
    // 0x3d0998: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x3d0998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3d099c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3d099cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3d09a0: 0x24047333  addiu       $a0, $zero, 0x7333
    ctx->pc = 0x3d09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
    // 0x3d09a4: 0xa42016  dsrlv       $a0, $a0, $a1
    ctx->pc = 0x3d09a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 5) & 0x3F));
    // 0x3d09a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3d09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d09ac: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d09acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d09b0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d09b0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d09b4: 0xc0f41a6  jal         func_3D0698
    ctx->pc = 0x3D09B4u;
    SET_GPR_U32(ctx, 31, 0x3D09BCu);
    ctx->pc = 0x3D09B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D09B4u;
    // 0x3d09b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0698u, 0x3D09B4u, 0x3D09BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D09BCu;
label_3d09bc:
    // 0x3d09bc: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d09bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3d09c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d09c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d09c4: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3d09c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3d09c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d09c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d09cc: 0x2442024  and         $a0, $s2, $a0
    ctx->pc = 0x3d09ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x3d09d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d09d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d09d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d09d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d09d8: 0x80f41a2  j           func_3D0688
    ctx->pc = 0x3D09D8u;
    ctx->pc = 0x3D09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D09D8u;
    // 0x3d09dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    sub_003D0688_0x3d0688(rdram, ctx, runtime); return;
    ctx->pc = 0x3D09E0u;
label_3d09e0:
    // 0x3d09e0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3d09e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3d09e4: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x3d09e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x3d09e8: 0xc0f41a2  jal         func_3D0688
    ctx->pc = 0x3D09E8u;
    SET_GPR_U32(ctx, 31, 0x3D09F0u);
    ctx->pc = 0x3D09ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D09E8u;
    // 0x3d09ec: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0688u, 0x3D09E8u, 0x3D09F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D09F0u;
label_3d09f0:
    // 0x3d09f0: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x3d09f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3d09f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d09f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d09f8: 0x902016  dsrlv       $a0, $s0, $a0
    ctx->pc = 0x3d09f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (GPR_U32(ctx, 4) & 0x3F));
    // 0x3d09fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d09fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0a00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d0a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0a04: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3d0a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3d0a08: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3d0a08u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3d0a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0a10: 0x80f41a6  j           func_3D0698
    ctx->pc = 0x3D0A10u;
    ctx->pc = 0x3D0A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D0A10u;
    // 0x3d0a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0698u;
    sub_003D0698_0x3d0698(rdram, ctx, runtime); return;
    ctx->pc = 0x3D0A18u;
label_3d0a18:
    // 0x3d0a18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d0a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d0a1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d0a1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d0a20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d0a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d0a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d0a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d0a28: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0A28u;
        // 0x3d0a2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0A30u;
}
