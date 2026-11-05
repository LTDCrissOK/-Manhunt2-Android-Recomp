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

// Function: sub_001E94F0
// Address: 0x1e94f0 - 0x1e9648
void sub_001E94F0_0x1e94f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E94F0_0x1e94f0");
#endif

    switch (ctx->pc) {
        case 0x1e9574u: goto label_1e9574;
        case 0x1e95acu: goto label_1e95ac;
        default: break;
    }

    ctx->pc = 0x1e94f0u;

    // 0x1e94f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e94f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e94f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1e94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1e94f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e94fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e94fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e9500: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e9500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e9504: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e9504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9508: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e9508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e950c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1e950cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9510: 0x8c47d9a4  lw          $a3, -0x265C($v0)
    ctx->pc = 0x1e9510u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x45D9A4u));
    // 0x1e9514: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e9514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9518: 0x8c642b1c  lw          $a0, 0x2B1C($v1)
    ctx->pc = 0x1e9518u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1e951c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e9520: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e9520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e9524: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e9524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e9528: 0x1087003c  beq         $a0, $a3, . + 4 + (0x3C << 2)
    ctx->pc = 0x1E9528u;
    {
        const bool branch_taken_0x1e9528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x1E952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9528u;
        // 0x1e952c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9528) {
            ctx->pc = 0x1E961Cu;
            goto label_1e961c;
        }
    }
    ctx->pc = 0x1E9530u;
    // 0x1e9530: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e9530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e9534: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9534u;
    {
        const bool branch_taken_0x1e9534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9534) {
            ctx->pc = 0x1E9538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E9534u;
            // 0x1e9538: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9550u;
            goto label_1e9550;
        }
    }
    ctx->pc = 0x1E953Cu;
    // 0x1e953c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1e953cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9540: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1e9540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1e9544: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1E9544u;
    {
        const bool branch_taken_0x1e9544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9544u;
        // 0x1e9548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9544) {
            ctx->pc = 0x1E961Cu;
            goto label_1e961c;
        }
    }
    ctx->pc = 0x1E954Cu;
    // 0x1e954c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1e9550:
    // 0x1e9550: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1e9550u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1e9554: 0x26100300  addiu       $s0, $s0, 0x300
    ctx->pc = 0x1e9554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x1e9558: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1e9558u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1e955c: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1e955cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e9560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9564: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x1e9564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1e9568: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1e9568u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e956c: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1E956Cu;
    SET_GPR_U32(ctx, 31, 0x1E9574u);
    ctx->pc = 0x1E9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E956Cu;
    // 0x1e9570: 0x8c470014  lw          $a3, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1E956Cu, 0x1E9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9574u;
label_1e9574:
    // 0x1e9574: 0x8e632b1c  lw          $v1, 0x2B1C($s3)
    ctx->pc = 0x1e9574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11036)));
    // 0x1e9578: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1e9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1e957c: 0x8c452b20  lw          $a1, 0x2B20($v0)
    ctx->pc = 0x1e957cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B20u));
    // 0x1e9580: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e9580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e9584: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e9584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e9588: 0xc480d9bc  lwc1        $f0, -0x2644($a0)
    ctx->pc = 0x1e9588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294957500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e958c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e9590: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e9590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e9594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9598: 0x264791f8  addiu       $a3, $s2, -0x6E08
    ctx->pc = 0x1e9598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939128));
    // 0x1e959c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1e959cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e95a0: 0xe64091f8  swc1        $f0, -0x6E08($s2)
    ctx->pc = 0x1e95a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294939128), bits); }
    // 0x1e95a4: 0xc0781f2  jal         func_1E07C8
    ctx->pc = 0x1E95A4u;
    SET_GPR_U32(ctx, 31, 0x1E95ACu);
    ctx->pc = 0x1E95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E95A4u;
    // 0x1e95a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E07C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E07C8u, 0x1E95A4u, 0x1E95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E95ACu;
label_1e95ac:
    // 0x1e95ac: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E95ACu;
    {
        const bool branch_taken_0x1e95ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E95ACu;
        // 0x1e95b0: 0x8e632b1c  lw          $v1, 0x2B1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e95ac) {
            ctx->pc = 0x1E9618u;
            goto label_1e9618;
        }
    }
    ctx->pc = 0x1E95B4u;
    // 0x1e95b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e95b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e95b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e95bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e95bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e95c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e95c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e95c4: 0xae632b1c  sw          $v1, 0x2B1C($s3)
    ctx->pc = 0x1e95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11036), GPR_U32(ctx, 3));
    // 0x1e95c8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e95cc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1e95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1e95d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1e95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e95d4: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1e95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1e95d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e95dc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1e95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e95e0: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x1e95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
    // 0x1e95e4: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1e95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1e95e8: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x1e95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x1e95ec: 0xae050030  sw          $a1, 0x30($s0)
    ctx->pc = 0x1e95ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 5));
    // 0x1e95f0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e95f4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x1e95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x1e95f8: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1e95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1e95fc: 0xc64091f8  lwc1        $f0, -0x6E08($s2)
    ctx->pc = 0x1e95fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294939128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9600: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e9600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1e9604: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e9604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e9608: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e9608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e960c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1e960cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e9610: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e9610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e9614: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x1e9614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_1e9618:
    // 0x1e9618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e961c:
    // 0x1e961c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e961cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e9620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e9624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e9624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e9628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e962c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e962cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9630: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e9630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e9634: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9634u;
        // 0x1e9638: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E963Cu;
    // 0x1e963c: 0x0  nop
    ctx->pc = 0x1e963cu;
    // NOP
    // 0x1e9640: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1e9640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e9644: 0x0  nop
    ctx->pc = 0x1e9644u;
    // NOP
    ctx->pc = 0x1e9648u;
}
